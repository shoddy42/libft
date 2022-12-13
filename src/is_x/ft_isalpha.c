/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 04:38:37 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 17:52:28 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns whether a character/int is in the alphabet or not.
 * 		  'a' - 'z', 'A' - 'Z'
 * 
 * @param c		The character to check.
 * @return @b 	[1] if it is a letter. Otherwise returns @b [0].
 */
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
