/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 04:42:57 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 17:52:30 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns whether a character/int is alpha numeric or not.
 * 		  '0' - '9', 'a' - 'z', 'A' - 'Z'
 * 
 * @param c		The character to check.
 * @return @b 	[1] if it is alphanumeric. Otherwise returns @b [0].
 */
int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
