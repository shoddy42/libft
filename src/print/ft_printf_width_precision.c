/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_width_precision.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/07 08:33:52 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:42:15 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

void	ft_width(const char *format, va_list args, t_printf *data)
{
	int	width;

	if (format[data->i] == '*')
	{
		width = va_arg(args, int);
		if (width < 0)
		{
			data->minus = 1;
			width *= -1;
		}
		data->width = width;
		data->i++;
	}
	if (format[data->i] >= '0' && format[data->i] <= '9')
	{
		width = ft_atoi(&format[data->i]);
		data->i += ft_numlen_base(width, 10);
	}
	data->width = width;
}

void	ft_precision(const char *format, va_list args, t_printf *data)
{
	long	prec;

	data->i++;
	data->has_p = 1;
	if (format[data->i] == '*')
	{
		prec = va_arg(args, int);
		data->precision = prec;
		if (prec < 0)
		{
			data->precision = -1;
			data->has_p = 0;
		}
		data->i++;
	}
	while (format[data->i] >= '0' && format[data->i] <= '9')
	{
		prec = ft_atoi(&format[data->i]);
		data->i += ft_numlen_base(prec, 10);
	}
	data->precision = prec;
}

void	pad_prec(t_printf *mem, int len, char pad, int neg)
{
	long	prec;

	prec = mem->precision;
	prec -= len - neg;
	while (prec > 0)
	{
		write(mem->fd, &pad, 1);
		prec--;
		mem->printed++;
	}
}

void	pad_width(t_printf *mem, int len, char pad, int neg)
{
	int	width;

	width = mem->width;
	if (mem->has_p == 1 && mem->precision > 0 && mem->precision >= len)
		width -= mem->precision + neg;
	else
		width -= len;
	while (width > 0)
	{
		write(mem->fd, &pad, 1);
		width--;
		mem->printed++;
	}
}
