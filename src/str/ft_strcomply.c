/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcomply.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 23:26:28 by wkonings      #+#    #+#                 */
/*   Updated: 2023/02/07 23:31:27 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Returns whether a given string complies to only
 * 		  consist of characters in allowed
 * 
 * @param str the string to check.
 * @param allowed all legal characters.
 * @return true if all characters of str are in allowed.
 * @return false if not all characters are in allowed.
 */
bool	ft_strcomply(char *str, char *allowed)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!ft_charinstr(str[i], allowed))
			return (false);
	return (true);
}
