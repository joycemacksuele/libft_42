/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:14:10 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/23 15:56:46 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if ((char const*)src < (char*)dst)
		while (len-- > 0)
			*((char*)dst + len) = *((char const*)src + len);
	else
		while (i < len)
		{
			*((char*)dst + i) = *((char const*)src + i);
			i++;
		}
	return (dst);
}

protected

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == src || len == 0)
		return (dst);
	while (dst != NULL || src != NULL)
	{
		if ((char const*)src < (char*)dst)
			while (len-- > 0)
				*((char*)dst + len) = *((char const*)src + len);
		else
			while (i < len)
			{
				*((char*)dst + i) = *((char const*)src + i);
				i++;
			}
		return (dst);
	}
	return (NULL);
}

/*
   OR

   void	*ft_memmove(void *dst, const void *src, size_t len)
   {
   char const	*srcc;
   char		*dstc;
   size_t		i;

   i = 0;
   srcc = (char const*)src;
   dstc = (char*)dst;
   if (dst == src || len == 0)
   return (dst);
   if (srcc < dstc)
   while (len-- > 0)
   dstc[len] = srcc[len];
   else
   while (i < len)
   {
   dstc[i] = srcc[i];
   i++;
   }
   return (dst);
   }

   OR

   void	*ft_memmove(void *dst, const void *src, size_t len)
   {
   unsigned char	tmp[len];

   if (dst == src || len == 0)
   return (dst);
   else
   ft_memcpy(tmp, src, len);
   ft_memcpy(dst, tmp, len);
   return (dst);
   }
   */

int		main(void)
{
	char	dst[] = "asdfghjk";
	char const	src[] = "asdfghjk";
	char	dst2[] = "asdfghjk";
	char const	src2[] = "asdfghjk";

	ft_putstr(ft_memmove(dst, src, 10));
	ft_putchar('\n');
	ft_putstr(memmove(dst2, src2, 10));
	ft_putchar('\n');
	return (0);
}
