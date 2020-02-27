/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:21:46 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/18 14:24:03 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int	main(void)
{
	t_list	*list;
	t_list	*last;
	char	str1[] = "str 1";
	char	str2[] = "str 2";
	char	str3[] = "str 3";

	list = ft_lstnew(str1, sizeof(str1));
	list->next = ft_lstnew(str2, sizeof(str2));
	list->next->next = ft_lstnew(str3, sizeof(str3));
	last = ft_lstlast(list);
	if (!(list || last))
		return (0);
	else
	{
		ft_putstr_list(last);
		write(1, "\n", 1);
	}
	return (0);
}*/
