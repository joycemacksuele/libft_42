/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 13:30:29 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/21 09:43:43 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*fresh_sub_str;

	fresh_sub_str = ft_strnew(len);
	if (fresh_sub_str == NULL || s == NULL)
		return (NULL);
	if (start < ft_strlen(s))
		ft_strncpy(fresh_sub_str, &s[start], len);
	return (fresh_sub_str);
}

/*int		main(void)
{
	char	s[] = "macksuele joyce";
	char	*res;

	res = ft_substr(s, 10,5);
	ft_putstr(res);
	ft_putchar('\n');
	return (0);
}*/
