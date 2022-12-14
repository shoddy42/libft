/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 20:46:33 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/14 14:27:31 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Allocates and returns a copy of @b [s1],
 * 		  with starting and trailing whitespace removed.
 * 		  Whitespaces are ' ', '\n' and '\t'.
 * 
 * @param s1 The string to be trimmed.
 * @param set The characters considered whitespace.
 * @return An allocated string. NULL if allocation fails
 */
char	*ft_strtrim(char const *s1)
{
	return (ft_strtrimset(s1, " \n\t"));
}
