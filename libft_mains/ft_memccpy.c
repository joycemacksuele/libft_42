/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:49:40 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/10 12:22:23 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest; // can be only char* too
	unsigned char	*str; // has to be unsigned char* (since c is unsigned char)
	unsigned char	a;

	i = 0;
	dest = (unsigned char*)dst;
	str = (unsigned char*)src;
	a = (unsigned char)c;
	while (i < n)
	{
		dest[i] = str[i];
		if (str[i] == a) // or (str[i] == (unsigned char)c) and delete line 20 and 25
			return (dst + i + 1); // worked with return ((char*)dst + i + 1)) ou sem casting

		i++;
	}
	return (NULL);
}

OR

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char*)dst)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == (unsigned char)c)
			return ((void*)dst + i + 1); 
		i++;
	}
//	if (!dst || !src || i > n) // can be without this too since while i < n it will run
//		return (NULL); 		// the while, and for the rest it'll return NULL already
	return (NULL);
}

int		main(void)
 {
  char	dst[] = "12v34567";
  char const	src[] = "12v34567";
  char	dst2[] = "12v34567";
  char const	src2[] = "12v34567";

  ft_putstr(ft_memccpy(dst, src, 'v', 2));
  ft_putchar('\n');
  ft_putstr(memccpy(dst2, src2, 'v', 2));
  ft_putchar('\n');
  return (0);
}
