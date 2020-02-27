/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 16:06:06 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/22 18:08:06 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	ft_memset(s, '\0', n); // or ft_memset(s, 0, n); ??
}

or

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*int		main(void)
  {
  char 	str[] = "12345";
  char	str1[] = "12345";

  ft_bzero(str, 3);
  printf("%s", str);
  ft_putchar('\n');
  bzero(str1, 3);
  printf("%s", str1);
  return (0);
  }*/
