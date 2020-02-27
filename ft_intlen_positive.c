/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_positive.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:03:05 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/17 15:28:18 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_intlen_positive(int n)// delete this func and use only intlen_base?
{
	int	len;

	len = 0;
	if ((unsigned int)n == 2147483648 || (long)n == -2147483648)
	{
		len = 10;
		return (len);
	}
	if (n < 0)
		n *= -1;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
