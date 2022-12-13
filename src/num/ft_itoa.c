/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 21:46:59 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:25:47 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Takes an integer and turns it into a string.
 * 
 * @param n Number to be converted.
 * @return Allocated string containing the number. Or NULL incase of faillure
 */
char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		len;

	nb = n;
	if (n < 0)
		n *= -1;
	len = ft_numlen(nb) + (n < 0);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len > 0)
	{
		len--;
		res[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
