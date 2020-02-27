/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:29:42 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/14 10:53:20 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	size_t	len;
	char	*str;

	str = (char*)s;
	len = ft_strlen(s) + 1;
	while (len)
	{
		len--;
		if (s[len] == (char)c)
			return (&str[len]);
	}
	return (NULL);
}
