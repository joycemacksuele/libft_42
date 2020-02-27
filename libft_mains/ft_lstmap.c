/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:28:16 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/21 14:39:33 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlst;

	if (lst)
	{
		newlst = (t_list*)malloc(sizeof(lst));
		if (newlst == NULL)
			return (NULL);
		newlst = (*f)(lst);
		newlst->next = ft_lstmap(lst->next, (*f));
		return (newlst);
	}
	return (NULL);
}

t_list	*ft_map(void *elem)
{
	int	i;
	void	*new_elem;

	new_elem = ft_lstnew(elem->content, elem->content_size);
	if (!new_elem)
		return (NULL);
	i = 0;
	while (((char*)new_elem->content)[i])
	{
		((char*)new_elem->content)[i] = 'x';
		i++;
	}
	return (new_elem);
}

int	main(void)
{
	t_list	*list;
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;
	char	str1[] = "str1 NOT deleted-freed";
	char	str2[] = "str2 NOT deleted-freed";
	char	str3[] = "str3 NOT deleted-freed";
	char	str4[] = "str4 NOT deleted-freed";

	list1 = ft_lstnew(str1, sizeof(str1));
	list2 = ft_lstnew(str2, sizeof(str2));
	list3 = ft_lstnew(str3, sizeof(str3));
	list4 = ft_lstnew(str4, sizeof(str4));
	if (!(list1 || list2 || list3 || list4))
		return (0);
	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	if (list1 || list2 || list3 || list4)
	{
		list = ft_lstmap(list1, &ft_map);
		if (list == list1)
			write(1, "A new list is not returned\n", 27);
		while (list)
		{
			ft_putstr_list(list);
			write(1, "\n", 1);
			list = list->next;
		}
	}
	return (0);
}
