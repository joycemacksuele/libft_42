/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:22:13 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/01 17:01:21 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strstr(char const *haystack, char const *needle)
{
	int		i;
	int		j;
	char	*str;
	char	*to_find;

	j = 0;
	i = 1;
	str = (char*)haystack;
	to_find = (char*)needle;
	if (!*to_find)
		return (str);
	while (str[j])
	{
		if (str[j] == to_find[0])
		{
			while (to_find[i] && str[j + i] == to_find[i])
				i++;
			if (!to_find[i])
				return (&str[j]);
		}
		j++;
	}
	return (NULL);
}

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "Hello";
	s2 = "eo";
	s3 = "Hello";
	s4 = "eo";
	printf("%s\n%s\n%s", s1, s2, ft_strstr(s1, s2));
	printf("\n%s", strstr(s3, s4));
	return (0);
}
