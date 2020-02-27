/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:23:59 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/24 17:11:38 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as) // or if (as || *as) ?
	{
		free(*as);
		*as = NULL;
	}
}

int		main(void)
{
	char	*str;
   
	str = malloc(1994); // or str = malloc(sizeof("joy")); ??
	ft_strdel(&str);
//	while (1)
//		;
	return (0);
}
