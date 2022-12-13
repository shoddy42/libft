/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 04:17:41 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 17:54:16 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns whether a character/int is a digit.
 * 		  '0' - '9' (48 - 57)
 * 
 * @param c		The character to check.
 * @return @b 	[1] if it is a digit. Otherwise returns @b [0]
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
