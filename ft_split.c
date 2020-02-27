/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:35:51 by jfreitas          #+#    #+#             */
/*   Updated: 2020/01/03 11:52:20 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_len(char const *s, char c)
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

static int		ft_countwords(char const *s, char c)
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

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		l;
	char	**str;

	i = 0;
	j = 0;
	if (!s || !(str = (char**)malloc(sizeof(char) * (ft_countwords(s, c) + 1))))
		return (NULL);
	while (i < ft_countwords(s, c))
	{
		l = 0;
		if (!(str[i] = ft_strnew(ft_word_len(&s[j], c))))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str[i][l++] = s[j++];
		str[i][l] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}
