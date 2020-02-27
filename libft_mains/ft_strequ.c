/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:30:55 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/16 15:47:54 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s1)
	{
		while ((*s1 && *s2) && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s1 == *s2)
			return (1);
	}
	return (0);
}

or

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s1)
	{
		if (ft_strcmp(s1, s2) == 0)
			return (1);
	}
	return (0);
}



int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "Hel";
	s2 = "Hel";
	s3 = "Hel";
	s4 = "Hel";
	printf("%s\n%s\n%d", s1, s2, ft_strequ(s1, s2));
	printf("\n%d", strcmp(s3, s4)); // just to see the differente between them
	return (0);
}
