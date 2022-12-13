/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 19:18:19 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 22:57:45 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
/**
 * @brief Checks if a given character is a
 * 			 ' ', '\t', '\n', '\v' '\f' '\r' 
 * 
 * @param c	The character to check.
 * @returns	@b [true] if it is a "space", or @b [false] if not.	
 */
bool	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\f' || c == '\r' || c == '\v');
}
