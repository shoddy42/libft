/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_print.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 16:50:47 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/15 19:59:03 by root          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_putnbr_base_unsigned(unsigned long nb, long base, \
	int offset, t_printf *mem)
{
	static char	*chars = "0123456789ABCDEF0123456789abcdef";
	int			ret;

	ret = 0;
	if (nb >= (unsigned long)base)
		ret += ft_putnbr_base(nb / base, base, offset, mem);
	write(mem->fd, chars + (nb % base) + offset, 1);
	return (1 + ret);
}

int	ft_putnbr_base(long nb, long base, int offset, t_printf *mem)
{
	static char	*chars = "0123456789ABCDEF0123456789abcdef";
	int			ret;

	ret = 0;
	if (nb < 0)
		nb *= -1;
	if (nb >= base)
		ret += ft_putnbr_base(nb / base, base, offset, mem);
	write(mem->fd, chars + (nb % base) + offset, 1);
	return (1 + ret);
}

void	ft_print_str(va_list args, t_printf *mem)
{
	char	*tmp;
	int		len;

	tmp = va_arg(args, char *);
	if (!tmp)
		tmp = "(null)";
	len = ft_strlen(tmp);
	if (len > mem->precision && mem->has_p == 1)
		len = mem->precision;
	else
		mem->precision = len;
	if (mem->minus == 0 && len < mem->width)
	{
		if (mem->zero == 0)
			pad_width(mem, len, ' ', 0);
		else
			pad_width(mem, len, '0', 0);
	}
	if (tmp)
		mem->printed += write(mem->fd, tmp, len);
	if (mem->minus == 1 && len < mem->width)
		pad_width(mem, len, ' ', 0);
}

void	ft_print_char(va_list args, t_printf *mem)
{
	char	c;

	c = va_arg(args, int);
	if (mem->minus == 0 && mem->zero == 0 && 1 < mem->width)
		pad_width(mem, 1, ' ', 0);
	mem->printed += write(mem->fd, &c, 1);
	if (mem->minus == 1 && 1 < mem->width)
		pad_width(mem, 1, ' ', 0);
}

void	ft_print_percent(va_list args, t_printf *mem)
{
	if (!args)
		args = NULL;
	if (mem->minus == 0 && mem->zero == 0 && 1 < mem->width)
		pad_width(mem, 1, ' ', 0);
	if (mem->minus == 0 && mem->zero == 1 && 1 < mem->width)
		pad_width(mem, 1, '0', 0);
	write(mem->fd, "%%", 1);
	mem->printed++;
	if (mem->minus == 1 && 1 < mem->width)
		pad_width(mem, 1, ' ', 0);
}
