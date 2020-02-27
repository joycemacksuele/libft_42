/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:52:00 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/15 16:28:24 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char*)s);
}

int		main(void)
{
	char	s[] = "asdf6hjk";
	char	s1[] = "asdf6hjk";

	ft_putstr(ft_strchr(s, 'd'));
	ft_putchar('\n');
	ft_putstr(strchr(s1, 'd'));
	ft_putchar('\n');
	return (0);
}
