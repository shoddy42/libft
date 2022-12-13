/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:32:35 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 18:37:06 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

//depricated standard lst function required by libft.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
