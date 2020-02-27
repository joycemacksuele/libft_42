/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:11:35 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/12 15:42:34 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t	j;
	char	*str;
	char	*to_find;
	int		length;

	j = 0;
	str = (char *)haystack;
	to_find = (char *)needle;
	length = ft_strlen(to_find);
	if (!*to_find)
		return (str);
	while (str[j] && (j + length) <= len)
	{
		if (ft_strncmp(haystack + j, needle, length) == 0)
			return (str + j);
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
	s2 = "l";
	s3 = "Hello";
	s4 = "l";
	printf("%s\n%s\n%s", s1, s2, ft_strnstr(s1, s2, 3));
	printf("\n%s", strnstr(s3, s4, 3));
	return (0);
}
