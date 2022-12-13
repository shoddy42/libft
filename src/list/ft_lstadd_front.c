/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 11:21:52 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 18:37:06 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

//depricated standard lst function required by libft.
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	new->next = *alst;
	*alst = new;
}
