/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strexpand.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/15 03:34:09 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/14 00:07:15 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Similar to ft_strjoin,
 * 		  Will string join @b [str] and @b [expand]. Then frees @b [str].
 * 
 * @param str		The first part of the string. (Will be freed).
 * @param expand 	The second string to append to @b [str].
 * @return A newly allocated joined version of @b [str] + @b [expand].
 */
char	*ft_strexpand(char *str, char const *expand)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (!str && !expand)
		return (NULL);
	if (!str)
		return (NULL);
	if (!expand)
		return (str);
	s = ft_calloc((ft_strlen(str) + ft_strlen(expand) + 1), sizeof(char));
	if (!s)
		return (NULL);
	i = -1;
	while (str[++i])
		s[i] = str[i];
	j = -1;
	while (expand[++j])
		s[i + j] = expand[j];
	s[i + j] = '\0';
	free(str);
	return (s);
}
