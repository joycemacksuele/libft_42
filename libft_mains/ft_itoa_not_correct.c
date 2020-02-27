/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:36:04 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/22 13:39:33 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	int		tmp;
	char	*fresh_str;

	len = 1;
	neg = 0;
	tmp = n;
	fresh_str = ft_strnew(len + neg);
	if (fresh_str == NULL)
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		fresh_str[0] = '-';
	}
	while ((tmp /= 10) != 0)
		len++;
	while (len)
	{
		len--;
		fresh_str[len + neg] = (neg ? -(n % 10) : (n % 10)) + 48;
		n = n / 10;
	}
	return (fresh_str);
}

int		main(void)
{
	ft_putstr(ft_itoa(0));
	ft_putstr(ft_itoa(1));
	ft_putstr(ft_itoa(10));
	ft_putstr(ft_itoa(3));
	ft_putstr(ft_itoa(-0));
	ft_putstr(ft_itoa(-9));
	ft_putstr(ft_itoa(-54));
	return (0);
}
