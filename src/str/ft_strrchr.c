/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/16 03:57:38 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/14 16:20:00 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Strchr but in reverse.
 * 		  Will go @b [s], if @b [c] is found
 * 		  it will return a pointer the first occurace of @b [c].
 * 
 * @param s The string to look through.
 * @param c The character to look for.
 * @return A pointer to the first occurance of @b [c] from the back of @b [s]
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	str = (char *)s;
	len = ft_strlen(str) + 1;
	while (--len + 1)
		if (str[len] == (char)c)
			return (&str[len]);
	return (NULL);
}
