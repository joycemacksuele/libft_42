/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 10:14:35 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/24 17:15:55 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

int		main(void)
{
	char	src[] = "heloooo";
	char	dest[] = "hi";

	ft_strcpy(dest, src);
	ft_strdup(src);
	ft_putstr(dest);
	ft_putstr("\n");
	strdup(src);
	ft_putstr(dest);
	return (0);
}
