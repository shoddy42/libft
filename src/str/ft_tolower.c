/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 05:08:18 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/14 14:08:10 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Takes an int/char between 'A' and 'Z' (65 - 90)
 * 		  Returns it as a non-capital. 
 * 
 * @param c The int/char
 * @return A lowercase version of an uppercase character.
 * 		   If not a lowercase letter returns @b [c]
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
