/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atol.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 23:27:39 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:28:07 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief	Turns a string into a long integer.
 * 			Will skip initial whitespace defined by ft_isspace.
 * 			Then accepts one occurance of '+' or '-', followed by numbers.
 * 			Remaining input will be ignored.
 * 
 * @param nb	The string to be turned to number
 * @returns		a long.
 */
long	ft_atol(const char *nb)
{
	int				i;
	unsigned long	r;
	int				sign;

	i = 0;
	r = 0;
	sign = 1;
	while (ft_isspace(nb[i]))
		i++;
	if (nb[i] == '-')
		sign = -1;
	if (nb[i] == '-' || nb[i] == '+')
		i++;
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		r = (r * 10) + (nb[i] - '0');
		i++;
	}
	return ((r * sign));
}
