/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:28:47 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/15 16:59:01 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t	i;
	char	*dest;
	char const	*str;

	i = 0;
	dest = (char*)dst; //or just dest = dst; (not casting since dest is declared as char)
	str = (char const*)src; // or str = src; (not casting since str is declared as char const)
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}
/*
OR

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t	i;	

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		*((char*)dst + i) = *((char*)src + i);
		i++;
	}
	return (dst);
}

protected

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t		i;
	char		*dest;
	char const	*str;

	i = 0;
	dest = (char*)dst;
	str = (char const*)src;
	if (n == 0 || dst == src)
		return (dst);
	while (dst != NULL || src != NULL)
	{
		while (i < n)
		{
			dest[i] = str[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}

int		main(void)
{
	char	dst[] = "asdfghjk";
	char const	src[] = "123";
	char	dst2[] = "asdfghjk";
	char const	src2[] = "123";

	ft_putstr(ft_memcpy(dst, src, 6));
	ft_putchar('\n');
	ft_putstr(memcpy(dst2, src2, 6));
	ft_putchar('\n');
	return (0);
}*/
