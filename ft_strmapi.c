/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:10:15 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/14 10:52:26 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh_str;
	size_t	i;

	if (s && f)
	{
		fresh_str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
		i = 0;
		if (s == NULL || fresh_str == NULL)
			return (NULL);
		while (s[i])
		{
			fresh_str[i] = (*f)(i, s[i]);
			i++;
		}
		fresh_str[i] = '\0';
		return (fresh_str);
	}
	return (0);
}
