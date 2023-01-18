/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 18:50:15 by wkonings      #+#    #+#                 */
/*   Updated: 2023/01/18 19:07:54 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Copies src into dst without allocating dst.
 * 
 * @param dst The ALLOCATED string to copy to.
 * @param src The string to copy from.
 * @return size_t 
 */
char	*ft_strcpy(char *dst, char const *src)
{
	int		i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (dst[i] && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst + i);
}
