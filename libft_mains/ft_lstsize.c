/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:14:38 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/18 14:25:52 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

int	main(void)
{
	t_list	*list;
	t_list	*last;
	int		size;
	char	str1[] = "str 1";
	char	str2[] = "str 2";
	char	str3[] = "str 3";

	list = ft_lstnew(str1, sizeof(str1));
	list->next = ft_lstnew(str2, sizeof(str2));
	list->next->next = ft_lstnew(str3, sizeof(str3));
	size = ft_lstsize(list);
	last = ft_lstlast(list);
	if (!(list || size))
		return (0);
	else
	{
		ft_putstr_list(last);
		write(1, "\n", 1);
		ft_putnbr(size);
	}
	return (0);
}
