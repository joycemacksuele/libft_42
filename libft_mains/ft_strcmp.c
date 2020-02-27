/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:14:11 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/23 16:23:02 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strcmp(char const *s1, char const *s2)
{
	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*((unsigned char*)s1) - *((unsigned char*)s2));
}

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "Hels";
	s2 = "hello";
	s3 = "Hels";
	s4 = "hello";
	printf("%s\n%s\n%d", s1, s2, ft_strcmp(s1, s2));
	printf("\n%d", strcmp(s3, s4));
	return (0);
}
