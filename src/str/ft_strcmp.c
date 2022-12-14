/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/05 17:20:38 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/14 14:40:38 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Compares two strings character by character.
 * 		  Returns the first character (casted to int) that differs.
 * 
 * @param s1 The first string.
 * @param s2 The second string.
 * @return The first different character. Returns 0 if strings are identical.
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = -1;
	while (s1[++i] || s2[i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

// int	ft_strcmp(const char *s1, const char *s2)
// {
// 	unsigned char	*str1;
// 	unsigned char	*str2;
// 	size_t			i;

// 	i = 0;
// 	str1 = (unsigned char *)s1;
// 	str2 = (unsigned char *)s2;
// 	while ((str1[i] || str2[i]))
// 	{
// 		if (str1[i] != str2[i])
// 			return (str1[i] - str2[i]);
// 		i++;
// 	}
// 	return (0);
// }
