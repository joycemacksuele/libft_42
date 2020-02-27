/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:35:13 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/19 13:59:53 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	char	*str;

	if (s1)
	{
		str = ft_strdup(s1);
		start = 0;
		if (s1 == NULL)
			return (NULL);
		while (s1[start] && ft_strchr(set, s1[start]) != NULL)
			start++;
		len = ft_strlen(&s1[start]);
		if (len != 0)
			while (s1[start + len - 1] &&
					ft_strchr(set, s1[start + len - 1]) != NULL)
				len--;
		str = ft_strncpy(str, &s1[start], len);
		str[len] = '\0';
		return (str);
	}
	return (0);
}

int		main(void)
{
	char	s1[] = "8012 456 80";
	char	set[] = "0 81";
	char	*res;

	res = ft_strtrim(s1, set);
	ft_putstr(res);
	return (0);
}
