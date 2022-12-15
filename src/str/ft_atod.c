/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atod.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/15 13:59:06 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/15 14:36:37 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static double	get_decimal(const char *nb)
{
	double	decimal;
	int		i;

	i = 0;
	decimal = 0;
	while (nb[i] >= '0' && nb[i] <= '9' && i < 6)
	{
		decimal = (decimal * 10) + (nb[i] - '0');
		i++;
	}
	while (i--)
		decimal = decimal / 10;
	return (decimal);
}

/**
 * @brief	Turns a string into a double
 * 			Will skip initial whitespace defined by ft_isspace.
 * 			Then accepts one occurance of '+' or '-', followed by numbers.
 * 			Remaining input will be ignored.
 * 
 * @param nb	The string to be turned to number
 * @returns		a double.
 */
double	ft_atod(const char *nb)
{
	int		i;
	double	r;
	int		sign;

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
	if (nb[i] == '.')
		r += get_decimal(nb + i + 1);
	return ((r * sign));
}
