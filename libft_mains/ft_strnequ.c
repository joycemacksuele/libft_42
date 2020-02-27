/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:40:39 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/21 13:27:17 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		if (ft_strncmp(&s1[i], &s2[i], n) == 0)
		{
			return (1);
			i++;
		}
	}
	return (0);
}

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "HelllO";
	s2 = "Hell";
	s3 = "HelllO";
	s4 = "Hell";
	printf("%s\n%s\n%d", s1, s2, ft_strnequ(s1, s2, 3));
	printf("\n%d", strncmp(s3, s4, 3)); // just to see the differente between them
	return (0);
}
