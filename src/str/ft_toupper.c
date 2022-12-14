/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 05:03:02 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/14 14:08:05 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Takes an int/char between 'a' and 'z' (97 - 122)
 * 		  Returns it as a capital. 
 * 
 * @param c The int/char 
 * @return An uppercase version of a lowercase character.
 * 		   If not a lowercase letter returns @b [c]
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
