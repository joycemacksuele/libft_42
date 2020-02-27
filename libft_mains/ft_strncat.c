/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:10:36 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/11 19:10:39 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char	*res1;
	char	*res2;
	char	s1[100] = "hello joy";
	char	s2[100] = "123456789";
	char	fts1[100] = "hello joy";
	char	fts2[100] = "123456789";

	res1 = strncat(s1, s2, 5);
	ft_putstr(res1);
	ft_putchar('\n');
	res2 = ft_strncat(fts1, fts2, 5);
	ft_putstr(res2);
	ft_putchar('\n');
	return (0);
}
