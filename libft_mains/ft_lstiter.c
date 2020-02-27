/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:00:32 by jfreitas          #+#    #+#             */
/*   Updated: 2019/08/27 15:25:04 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst,	void (*f)(t_list *elem))
{
	while (lst)
	{
		(*f)(lst);
		lst = lst->next; // its the equivalent to  the lst++ loop
	}
}

void	modify(t_list *elem)
{
	int	i;
	
	i = 0;
	while (((char*)elem->content)[i])
	{
		((char*)elem->content)[i] = '.';
		i++;
	}
}

int		main(void)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;
	char	str1[] = "str1-link1 NOT modified";
	char	str2[] = "str2-link2 NOT modified";
	char	str3[] = "str3-link3 NOT modified";
	char	str4[] = "str4-link4 NOT modified";

	list1 = ft_lstnew(str1, sizeof(str1));
	list2 = ft_lstnew(str2, sizeof(str2));
	list3 = ft_lstnew(str3, sizeof(str3));
	list4 = ft_lstnew(str4, sizeof(str4));
	if (!(list1 || list2 || list3 || list4))
		return (0);
	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	if (list1 && list2 && list3 && list4)
	{
		ft_lstiter(list1, &modify);
		ft_putstr_list(list1);
	}
	write(1, "\n", 1);
	return (0);
}
