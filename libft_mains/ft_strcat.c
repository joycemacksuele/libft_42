/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 17:04:05 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/11 17:36:56 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char const *s2)
{
	char	*res;

	res = s1;
	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (res);
}

int		main(void)
{
	char	*res1;
	char	*res2;
	char	s1[100] = "hello joy";
	char	s2[100] = "123456789";
	char	fts1[100] = "hello joy";
	char	fts2[100] = "123456789";
	
	res1 = strcat(s1, s2);
	ft_putstr(res1);
	ft_putchar('\n');
	res2 = ft_strcat(fts1, fts2);
	ft_putstr(res2);
	ft_putchar('\n');
	return (0);
}
