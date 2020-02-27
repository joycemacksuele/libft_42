/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:52:54 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/21 15:20:19 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh_str;

	fresh_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (fresh_str == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	ft_strcpy(fresh_str, s1);
	ft_strcat(fresh_str, s2);
	return (fresh_str);
}

int		main(void)
{
	char	*res1;
	char	*res2;
	char	s1[100] = " joy";
	char	s2[100] = "123456789";
	char	fts1[100] = " joy";
	char	fts2[100] = "123456789";

	res1 = strcat(s1, s2);
	ft_putstr(res1);
	ft_putchar('\n');
	res2 = ft_strjoin(fts1, fts2);
	ft_putstr(res2);
	ft_putchar('\n');
	return (0);
}
