/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 19:04:25 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/05/23 19:24:57 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*list;

	if (lst && *lst)
	{
		list = *lst;
		*lst = NULL;
		while (list)
		{
			tmp = list->next;
			del(list->content);
			free(list);
			list = tmp;
		}
	}
}
