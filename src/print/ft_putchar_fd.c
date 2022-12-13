/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 22:21:55 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:18:31 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Prints a character to a given filedescriptor.
 * 
 * @param c The character to be printed.
 * @param fd The filedescriptor to write to.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}
