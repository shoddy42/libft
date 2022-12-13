/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 23:28:50 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 22:53:31 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief 
 * 
 * @param dst 
 * @param src 
 * @param n 
 * @return void* 
 */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	i = -1;
	while (++i < n)
		((unsigned char *)dst)[n - i] = ((unsigned char *)src)[n - i];
	return (dst);
}
