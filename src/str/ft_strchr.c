/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/16 03:57:38 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/14 16:41:02 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Looks through a string to find if @b [c] exists in it.
 * 
 * @param s The string to look through.
 * @param c The character to look for.
 * @returns A pointer to the first occurance of @b [c] in the string if found.
 * @returns Else NULL
 */
char	*ft_strchr(const char *s, int c)
{
	char	check;
	char	*str;
	size_t	i;
	size_t	len;

	check = (char)c;
	str = (char *)s;
	i = 0;
	len = ft_strlen(str);
	while (i <= len)
	{
		if (str[i] == check)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
