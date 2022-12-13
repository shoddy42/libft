/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 22:28:03 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 22:57:35 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		ft_putchar_fd('\n', fd);
	}
}
