/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/16 03:26:02 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 22:47:33 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (len < dstsize && dst[len])
		len++;
	i = len;
	while (i + 1 < dstsize && src[i - len])
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < dstsize)
		dst[i] = '\0';
	return (ft_strlen(src) + len);
}
