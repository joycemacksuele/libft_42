/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:05:51 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/15 16:58:33 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_list(t_list *str)
{
	int	i;

	i = 0;
	while (((char*)str->content)[i])
	{
		write(1, &str->content[i], 1);
		i++;
	}
	str = str->next;
}
/*
int		main(void)
{
	t_list	*lst;
	char	str[] = "\nbla bla bla ... \n\n";

	lst = ft_lstnew(str, ft_strlen(str));
	lst->content = str;
	ft_putstr_list(lst);
	return (0);
}*/
