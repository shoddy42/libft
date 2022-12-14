/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/16 02:41:08 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 22:53:31 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	check;
	unsigned char	*str;

	check = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == check)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
