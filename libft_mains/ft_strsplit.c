/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:35:51 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/25 11:21:16 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*static */int		ft_word_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

/*static */int		ft_countwords(char const *s, char c)
{
	int count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		l;
	char	**str;

	i = 0;
	j = 0;
	if (!s || !(str = (char**)malloc(sizeof(*str) * (ft_countwords(s, c) + 1))))
		return (NULL);
	while (i < ft_countwords(s, c))
	{
		l = 0;
		if (!(str[i] = ft_strnew(ft_word_len(&s[j], c) + 1)))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str[i][l++] = s[j++];
		str[i][l] = '\0';
		i++;
	}
	str[i] = 0;
	return (str);
}

int		main(void)
{
	char	**fresh_str;
	int		a;
	int		b;
	int		i;

	i = 0;
	fresh_str = ft_strsplit("joyce m", 'y');
	a = ft_countwords("joyce m", 'y');
	b = ft_word_len("joyce m", 'y');
	while (fresh_str[i])
	{
		printf("%s\n", fresh_str[i]);
		i++;
	}
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
