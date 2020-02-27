/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:36:04 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/24 17:13:47 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t	len;
	size_t	neg;
	char	*fresh_str;

	len = ft_intlen(n);
	if (!(fresh_str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	fresh_str[len] = '\0';
	if (n < 0)
	{
		fresh_str[0] = '-';
		neg = 1;
	}
	else
		neg = 0;
	while (len > neg)
	{
		len--;
		fresh_str[len] = 48 + n % 10 * (n < 0 ? -1 : 1);
		n = n / 10;
	}
	return (fresh_str);
}

int 	main()
{
	ft_putstr(ft_itoa(10));
	ft_putchar('\n');
	ft_putnbr(ft_intlen(10));
	return (0);
}
