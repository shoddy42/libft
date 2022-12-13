/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/01 21:01:46 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:02:29 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// static int	ft_isspace(char n)
// {
// 	if (n == ' ' || n == '\t' || n == '\v'
// 		|| n == '\f' || n == '\r' || n == '\n')
// 		return (1);
// 	return (0);
// }

#include "../../include/libft.h"

/**
 * @brief	Turns a string into an integer.
 * 			Will skip initial whitespace defined by ft_isspace.
 * 			Then accepts one occurance of '+' or '-', followed by numbers.
 * 			Remaining input will be ignored.
 * 
 * @param nb The string to be turned to number
 * @returns a long casted to an int.
 */
int	ft_atoi(const char *nb)
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
	return ((int)(r * sign));
}
