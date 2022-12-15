/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atof.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/15 14:31:59 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/15 14:40:07 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief	Turns a string into a float
 * 			Will skip initial whitespace defined by ft_isspace.
 * 			Then accepts one occurance of '+' or '-', followed by numbers.
 * 			Remaining input will be ignored.
 * 			This function simply calls atod and casts to float.
 * 
 * @param nb	The string to be turned to number
 * @returns		a float.
 */
float	ft_atof(const char *nb)
{
	return ((float)ft_atod(nb));
}
