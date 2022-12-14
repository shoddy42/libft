/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/01 20:48:00 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/14 14:36:10 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Duplicates a given string.
 * 
 * @param s1 The string to be duplicated.
 * @return An allocated copy of the given string. NULL if allocation fails. 
 */
char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	s2 = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!s2)
		return (NULL);
	i = -1;
	while (s1[++i])
		s2[i] = s1[i];
	return (s2);
}
