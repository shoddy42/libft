/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen_base_unsigned.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 23:32:40 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/15 19:45:46 by root          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_numlen_base_unsigned(unsigned long n, int base)
{
	size_t		len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}
