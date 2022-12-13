/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 04:47:37 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 17:53:08 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns whether a character/int is in the (non extended) ascii table.
 * 		  0 - 127
 * 
 * @param c		The character to check.
 * @return @b 	[1] if it is in the ascii table. Otherwise returns @b [0]
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
