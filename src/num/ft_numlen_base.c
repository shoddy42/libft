/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 23:33:21 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:47:45 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

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
