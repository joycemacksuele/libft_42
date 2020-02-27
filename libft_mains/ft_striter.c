/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:59:17 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/16 12:24:28 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			(*f)(&s[i]);
			i++;
		}
	}
}

void	ft_test(char *s)
{
	*s = s* + 1;
}

int		main(void)
{
	char	s[] = "12345";

	ft_striter(s, ft_putstr); // with the char* putstr, not the char const* one
	return (0);
}

or

int		main(void)
{
	ft_striter(s, ft_test);
	return (0);
}
