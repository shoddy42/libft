/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 23:06:57 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:31:52 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_numlen_base(long n, int base)
{
	size_t		len;

	len = 0;
	if (n <= 0)
		len = 1;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

size_t	ft_numlen_base_unsigned(unsigned long n, int base)
{
	size_t		len;

	len = 0;
	if (n <= 0)
		len = 1;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}
