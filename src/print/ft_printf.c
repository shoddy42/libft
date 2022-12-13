/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 21:36:55 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:42:30 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

void	ft_pre_parse(const char *format, va_list args, t_printf *mem)
{
	while (format[mem->i] == '0' || format[mem->i] == '-'
		|| format[mem->i] == ' ' || format[mem->i] == '#'
		|| format[mem->i] == '+')
	{
		if (format[mem->i] == '0')
			mem->zero = 1;
		if (format[mem->i] == '-')
			mem->minus = 1;
		mem->i++;
	}
	if ((format[mem->i] >= '1' && format[mem->i] <= '9') \
		|| format[mem->i] == '*')
		ft_width(format, args, mem);
	if (format[mem->i] == '.')
		ft_precision(format, args, mem);
	if (0 == 1)
		(void)(args);
	if (format[mem->i] == 'l')
		mem->i++;
}

static void	ft_parse_format(const char *format, va_list args, t_printf *mem)
{
	static	t_fpoint(*pair[256]) = {
	['c'] = ft_print_char,
	['s'] = ft_print_str,
	['i'] = ft_print_int,
	['d'] = ft_print_int,
	['p'] = ft_print_pointer,
	['x'] = ft_print_hex,
	['X'] = ft_print_uhex,
	['u'] = ft_print_uint,
	['%'] = ft_print_percent};

	mem->i++;
	ft_pre_parse(format, args, mem);
	if (pair[(int)format[mem->i]] != 0)
	{
		pair[(int)format[mem->i]](args, mem);
		mem->i++;
	}
}

void	set_printf(t_printf *mem)
{
	mem->precision = -1;
	mem->has_p = 0;
	mem->width = 0;
	mem->minus = 0;
	mem->zero = 0;
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	t_printf	mem;
	int			ret;

	mem.printed = 0;
	mem.i = 0;
	mem.fd = 1;
	set_printf(&mem);
	va_start(args, format);
	while (format[mem.i])
	{
		if (format[mem.i] == '%')
			ft_parse_format(format, args, &mem);
		else
		{
			write(mem.fd, &format[mem.i], 1);
			mem.i++;
			mem.printed++;
		}
		set_printf(&mem);
	}
	va_end(args);
	ret = mem.printed;
	return (mem.printed);
}
