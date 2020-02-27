/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 11:31:08 by jfreitas          #+#    #+#             */
/*   Updated: 2019/08/27 11:33:33 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{	
	t_list	*tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	if (content == NULL)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	else
	{
		tmp->content = (void*)malloc(sizeof(content) * content_size);
		if (tmp->content == NULL)
		{
			free(tmp);
			return (NULL);
		}
		ft_memcpy((tmp->content), content, content_size);
		tmp->content_size = content_size;
	}
	tmp->next = NULL;
	return (tmp);
}

/*int		main(void)
{
	t_list	*list;

	list = ft_lstnew("42\n", 3);
	if (list)
	{
		ft_putstr(list->content);
	}
//	while (1)
//		;
	return (0);
}*/
