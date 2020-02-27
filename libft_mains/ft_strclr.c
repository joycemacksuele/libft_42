/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:50:21 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/10 17:11:49 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	if (s)
	{
		while (*s)
		{
			*s = '\0'; // or *s++ = '\0' and delete line 22
			s++;
		}
	}
}

int		main(void)
{
	char	str[] = "joy";

	ft_strclr(str);
	ft_putstr(str);
	return (0);
}
