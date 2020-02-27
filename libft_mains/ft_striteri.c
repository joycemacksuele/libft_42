/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:44:59 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/16 12:41:51 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_test(unsigned int i, char *s)
/*{
	if (s && i)
	{
		i = 0;
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		s[i] = '\0';
	}
}*/
{
	*s = s* + i;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (*s)
		{
			(*f)(i, s);
			i++;
			s++;
		}
	}
}

int		main(void)
{
	char	s[] = "asdf";

	ft_striteri(s, ft_test); // with the char* putstr, not the char const* one. AND unsigned int before the char*
	ft_putstr(s);
	return (0);
}
