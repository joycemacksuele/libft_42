/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:27:03 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/23 16:04:52 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char*)s == (unsigned char)c)
			return ((unsigned char*)s);
		s++;
	}
	return (NULL);
}

or with index and casting on declarations

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c2;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	c2 = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == c2)
			return ((void*)&str[i]);
		else
			i++;
	}
	return (NULL);
}

int		main(void)
{
	char	s[] = "asdf1hjk";
	char	s1[] = "asdf1hjk";

	ft_putstr(ft_memchr(s, '6', 9));
	ft_putchar('\n');
	ft_putstr(memchr(s1, '6', 9));
	ft_putchar('\n');
	return (0);
}
