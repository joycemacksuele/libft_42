/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:36:04 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/16 21:09:55 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	char	ft_calculate_char(int res, char c)
{
	char	ret_char;

	ret_char = '0';
	while (res)
	{
		ret_char++;
		if (ret_char == ':')
			ret_char = c;
		res--;
	}
	return (ret_char);
}

char			*ft_itoa_base(unsigned long n, int base, char c)
{
	unsigned long	nb;
	int				res;
	int				n_len;
	char			*str;

	if (n == 0)
	{
		if (!(str = ft_strnew(1)))
			return (NULL);
		*str = '0';
		return (str);
	}
	nb = n;
	n_len = ft_intlen_base(n, base);
	if (!(str = ft_strnew(n_len)))
		return (NULL);
	while (nb)
	{
		res = nb % base;
		nb /= base;
		str[n_len - 1] = ft_calculate_char(res, c);
		n_len--;
	}
	return (str);
}
