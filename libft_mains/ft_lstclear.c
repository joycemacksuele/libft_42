/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:50:45 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/18 13:12:05 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_link_deleted;

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
// pode ser protegido com if (alst && del) 
	while (*lst)
	{
		tmp = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

void	del(void *content)
{
		free(content);
		nb_link_deleted++;
}

int	main(void)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;
	char	str1[] = "str1-link1 NOT deleted-freed";
	char	str2[] = "str2-link2 NOT deleted-freed";
	char	str3[] = "str3-link3 NOT deleted-freed";
	char	str4[] = "str4-link4 NOT deleted-freed";

	list1 = ft_lstnew(str1, sizeof(str1));
	list2 = ft_lstnew(str2, sizeof(str2));
	list3 = ft_lstnew(str3, sizeof(str3));
	list4 = ft_lstnew(str4, sizeof(str4));
	if (!(list1 || list2 || list3 || list4))
		return (0);
	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	nb_link_deleted = 0;
	if (list1 && list2 && list3 && list4)
	{
		ft_lstclear(&list1, &del);
		if (list1 && nb_link_deleted <= 3)
			ft_putstr_list(list1);
		else
			write(1, "str1-link1 deleted-freed", 24);
		write(1, "\n", 1);
		if (list2 && nb_link_deleted <= 2)
			ft_putstr_list(list2);
		else
			write(1, "str2-link2 deleted-freed", 24);
		write(1, "\n", 1);
		if (list3 && nb_link_deleted <= 1)
			ft_putstr_list(list3);
		else
			write(1, "str3-link3 deleted-freed", 24);
		write(1, "\n", 1);
		if (list4 || nb_link_deleted == 1)
		{
			printf("str4-link4 deleted-freed\n"); // no need to print the str4 since it will always be deleted
			printf("number of link deleted: %d link(s)\n", nb_link_deleted); 
		}
	}
	return (0);
}
