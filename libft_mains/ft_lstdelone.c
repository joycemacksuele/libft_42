/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 17:32:30 by jfreitas          #+#    #+#             */
/*   Updated: 2019/08/27 12:53:56 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst) // or if(alst && del) for a better protection? 
	{
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}

void	del(void *content, size_t content_size)
{
	(void)content_size;
	free(content);
}

int	main(void)
{
	t_list	*list1;
	t_list	*list2;
	char	str1[] = "str1-link1 NOT deleted-freed";
	char	str2[] = "str2-link2 NOT deleted-freed";

	list1 = ft_lstnew(str1, sizeof(str1));
	list2 = ft_lstnew(str2, sizeof(str2));
	if (!list1 || !list2)
		return (0);
	list1->next = list2;
	if (list1 || list2)
	{
		ft_lstdelone(&list2, del);
		if (list1)
			ft_putstr_list(list1);
		else
			write(1, "str1-link1 deleted-freed", 24);
		write(1, "\n", 1);
		if (list2)
			ft_putstr_list(list2);
		else
			write(1, "str2-link2 deleted-freed", 24);
		write(1, "\n", 1);
	}
	return (0);
}
