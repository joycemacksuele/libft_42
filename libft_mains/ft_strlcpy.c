* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:09:13 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/15 15:19:30 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	size_t	i;
	size_t	srcl;

	if (dst && src)
	{
		i = 0;
		srcl = ft_strlen(src);
		if (dstsize == 0)
			return (srcl);
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (srcl);
	}
	return (0);
}
/*
int		main(void)
{
	size_t		res1;
	size_t		res2;
	char		s1[100] = "123456789";
	char		s2[100] = "hey";
	char		fts1[100] = "123456789";
	char		fts2[100] = "hey";

	res1 = strlcpy(s1, s2, 1);
	ft_putnbr(res1);
	ft_putchar('\n');
	res2 = ft_strlcpy(fts1, fts2, 1);
	ft_putnbr(res2);
	ft_putchar('\n');
	return (0);
}*/
