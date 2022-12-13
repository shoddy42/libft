/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 22:21:55 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 22:57:35 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}
