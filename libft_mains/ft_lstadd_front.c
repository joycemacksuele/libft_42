/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:02:48 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/15 17:34:08 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}

int	main(void)
{
	t_list	*alstbegin;
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;
	char	str1[] = "str1 e";
	char	str2[] = "str2 v";
	char	str3[] = "str3 i";
	char	str4[] = "str4 l";

	list1 = ft_lstnew(str1, sizeof(str1));
	list2 = ft_lstnew(str2, sizeof(str2));
	list3 = ft_lstnew(str3, sizeof(str3));
	list4 = ft_lstnew(str4, sizeof(str4));
	if (!(list1 || list2 || list3 || list4))
		return (0);
	if (list1 || list2 || list3 || list4)
	{
		alstbegin = NULL;
		ft_lstadd_front(&alstbegin, list1);
		ft_lstadd_front(&alstbegin, list2);
		ft_lstadd_front(&alstbegin, list3);
		ft_lstadd_front(&alstbegin, list4);
		while (alstbegin)
		{
			ft_putstr_list(alstbegin);
			write(1, "\n", 1);
			alstbegin = alstbegin->next;
		}
	}
	return (0);
}
