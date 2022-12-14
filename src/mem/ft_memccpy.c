/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/16 01:31:34 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/14 16:58:19 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//todo: requires testing!
/**
 * @brief Copies memory. Copies @b [n] characters from @b [src] to @b [dst]
 * 		  Will stop once @b [c] is found,
 * 		  Then returns a pointer to the character after @b [c].
 * @param dst The destination.
 * @param src The source.
 * @param c 
 * @param n 
 * @return void* 
 */
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	check;
	unsigned char	*d;
	unsigned char	*s;

	check = (unsigned char)c;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n)
	{
		n--;
		*d = *s;
		if (*d == check)
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}
		// d++;
		// s++;
