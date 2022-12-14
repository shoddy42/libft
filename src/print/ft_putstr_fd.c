/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 22:23:14 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:20:41 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <unistd.h>

/**
 * @brief Prints a string to a given filedescriptor.
 * 
 * @param s The string to be printed.
 * @param fd The filedescriptor to write to.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
