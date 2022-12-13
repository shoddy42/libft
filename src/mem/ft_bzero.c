/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/02 22:13:29 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 22:53:31 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Will @b [n] amount of indexes of @b [s] to 0.
 * 
 * @param s The memory block.
 * @param n The amount of indexes to set.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
