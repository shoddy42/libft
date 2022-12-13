/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/16 03:57:38 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 18:37:06 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	check;
	char	*str;
	size_t	len;

	check = (char)c;
	str = (char *)s;
	len = ft_strlen(str);
	while (len + 1)
	{
		if (str[len] == check)
			return (&str[len]);
		len--;
	}
	return (NULL);
}
