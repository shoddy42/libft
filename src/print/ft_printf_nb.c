/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_nb.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 23:00:13 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:47:01 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

void	ft_print_int(va_list args, t_printf *mem)
{
	long	nb;
	int		len;

	nb = va_arg(args, int);
	len = ft_numlen_base(nb, 10);
	if (nb == 0 && mem->has_p == 1 && mem->precision == 0)
		len = 0;
	if (mem->minus == 1 || mem->has_p == 1)
		mem->zero = 0;
	if (mem->minus == 0 && mem->zero == 0 && len < mem->width)
		pad_width(mem, len, ' ', (nb < 0));
	if (nb < 0)
		mem->printed += write(mem->fd, "-", 1);
	if (mem->minus == 0 && mem->zero == 1 && len < mem->width)
		pad_width(mem, len, '0', (nb < 0));
	if (len < mem->precision || (len <= mem->precision && nb < 0))
		pad_prec(mem, len, '0', (nb < 0));
	if (!(nb == 0 && mem->has_p == 1 && mem->precision == 0))
		mem->printed += ft_putnbr_base(nb, 10, 0, mem);
	if (mem->minus == 1 && len < mem->width)
		pad_width(mem, len, ' ', (nb < 0));
}

void	ft_print_uint(va_list args, t_printf *mem)
{
	unsigned long	nb;
	int				len;

	nb = va_arg(args, unsigned int);
	len = ft_numlen_base(nb, 10);
	if (nb == 0 && mem->has_p == 1 && mem->precision == 0)
		len = 0;
	if (mem->minus == 1 || mem->has_p == 1)
		mem->zero = 0;
	if (mem->minus == 0 && mem->zero == 0 && len < mem->width)
		pad_width(mem, len, ' ', 0);
	if (mem->minus == 0 && mem->zero == 1 && len < mem->width)
		pad_width(mem, len, '0', 0);
	if (len < mem->precision)
		pad_prec(mem, len, '0', (nb < 0));
	if (!(nb == 0 && mem->has_p == 1 && mem->precision == 0))
		mem->printed += ft_putnbr_base(nb, 10, 0, mem);
	if (mem->minus == 1 && len < mem->width)
		pad_width(mem, len, ' ', 0);
}

void	ft_print_hex(va_list args, t_printf *mem)
{
	unsigned long	nb;
	int				len;

	nb = va_arg(args, unsigned int);
	len = ft_numlen_base(nb, 16);
	if (nb == 0 && mem->has_p == 1 && mem->precision == 0)
		len = 0;
	if (mem->minus == 1 || mem->has_p == 1)
		mem->zero = 0;
	if (mem->minus == 0 && mem->zero == 0 && len < mem->width)
		pad_width(mem, len, ' ', (nb < 0));
	if (nb < 0)
		write(mem->fd, "-", 1);
	if (mem->minus == 0 && mem->zero == 1 && len < mem->width)
		pad_width(mem, len, '0', (nb < 0));
	if (len < mem->precision)
		pad_prec(mem, len, '0', (nb < 0));
	if (!(nb == 0 && mem->has_p == 1 && mem->precision == 0))
		mem->printed += ft_putnbr_base(nb, 16, 16, mem) + (nb < 0);
	if (mem->minus == 1 && len < mem->width)
		pad_width(mem, len, ' ', (nb < 0));
}

void	ft_print_uhex(va_list args, t_printf *mem)
{
	unsigned long	nb;
	int				len;

	nb = va_arg(args, unsigned int);
	len = ft_numlen_base_unsigned(nb, 16);
	if (nb == 0 && mem->has_p == 1 && mem->precision == 0)
		len = 0;
	if (mem->minus == 1 || mem->has_p == 1)
		mem->zero = 0;
	if (mem->minus == 0 && mem->zero == 0 && len < mem->width)
		pad_width(mem, len, ' ', (nb < 0));
	if (nb < 0)
		write(mem->fd, "-", 1);
	if (mem->minus == 0 && mem->zero == 1 && len < mem->width)
		pad_width(mem, len, '0', (nb < 0));
	if (len < mem->precision)
		pad_prec(mem, len, '0', (nb < 0));
	if (!(nb == 0 && mem->has_p == 1 && mem->precision == 0))
		mem->printed += ft_putnbr_base_unsigned(nb, 16, 0, mem) + (nb < 0);
	if (mem->minus == 1 && len < mem->width)
		pad_width(mem, len, ' ', (nb < 0));
}

void	ft_print_pointer(va_list args, t_printf *mem)
{
	unsigned long	nb;
	int				len;

	nb = va_arg(args, unsigned long);
	len = ft_numlen_base_unsigned(nb, 16) + 2;
	if (nb == 0 && mem->has_p == 1 && mem->precision == 0)
		len = 0;
	if (!nb)
		len = 3 - mem->has_p;
	if (mem->minus == 1 || mem->has_p == 1)
		mem->zero = 0;
	if (mem->minus == 0 && mem->zero == 0 && len < mem->width)
		pad_width(mem, len, ' ', (nb < 0));
	if (mem->minus == 0 && mem->zero == 1 && len < mem->width)
		pad_width(mem, len, '0', (nb < 0));
	if (len < mem->precision)
		pad_prec(mem, len, '0', (nb < 0));
	mem->printed += write(mem->fd, "0x", 2);
	if (!(nb == 0 && mem->has_p == 1 && mem->precision == 0))
		mem->printed += ft_putnbr_base_unsigned(nb, 16, 16, mem) + (nb < 0);
	if (mem->minus == 1 && len < mem->width)
		pad_width(mem, len, ' ', (nb < 0));
}
