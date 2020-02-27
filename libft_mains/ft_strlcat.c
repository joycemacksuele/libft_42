/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:11:49 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/11 20:47:47 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstl;
	size_t	srcl;

	i = 0;
	j = 0;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (size <= dstl)
		return (srcl + size);
	while (dst[i])
		i++;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstl + srcl);
}

int		main(void)
{
	size_t		res1;
	size_t		res2;
	char		s1[100] = "hello joy";
	char		s2[100] = "123456789";
	char		fts1[100] = "hello joy";
	char		fts2[100] = "123456789";

	res1 = strlcat(s1, s2, 0);
	ft_putnbr(res1);
	ft_putchar('\n');
	res2 = ft_strlcat(fts1, fts2, 0);
	ft_putnbr(res2);
	ft_putchar('\n');
	return (0);
}
