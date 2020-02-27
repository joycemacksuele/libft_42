/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:29:42 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/15 17:21:30 by jfreitas         ###   ########.fr       */
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

int		main(void)
{
	char	s[] = "asdf6hjkd12d34";
	char	s1[] = "asdf6hjkd12d34";

	ft_putstr(ft_strrchr(s, 'd'));
	ft_putchar('\n');
	ft_putstr(strrchr(s1, 'd'));
	ft_putchar('\n');
	return (0);
}
