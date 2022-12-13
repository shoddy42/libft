/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 20:33:45 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/13 23:07:35 by wkonings      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//depricated standard lst function required by libft.
t_list	*ft_lstnew(void *content)
{
	t_list		*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (!content)
		new->content = NULL;
	else
	{
		new->content = content;
	}
	return (new);
}
