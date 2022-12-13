/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 04:53:07 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 17:55:28 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns whether a character/int is print or not.
 * 		  32 - 126
 * 
 * @param c		The character to check.
 * @return @b 	[1] if it is print. Otherwise returns @b [0]
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
