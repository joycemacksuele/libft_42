/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 12:18:50 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/09 12:34:57 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strncpy(char *dest, char const *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		if (i < len)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}*/

char	*ft_strncpy(char *dest, char const *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main(void)
{
	char	src[] = "12345";
	char	dest[] = "hello";
	char	*res;
	char	ftsrc[] = "12345";
	char	ftdest[] = "hello";
	char	*ftres;

	res = strncpy(dest, src, 0);
	ft_putstr(res);
	ft_putchar('\n');
	ftres = ft_strncpy(ftdest, ftsrc, 0);
	ft_putstr(ftres);
	ft_putchar('\n');
	return (0);
}
