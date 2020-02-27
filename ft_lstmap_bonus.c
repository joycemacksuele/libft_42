/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:28:16 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/21 14:22:26 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;

	if (lst)
	{
		newlst = (t_list*)malloc(sizeof(lst));
		if (newlst == NULL)
			return (NULL);
		newlst = (*f)(lst->content);
		newlst->next = ft_lstmap(lst->next, (*f), (*del));
		return (newlst);
	}
	return (NULL);
}
