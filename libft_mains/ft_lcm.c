/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lcm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 16:57:33 by exam              #+#    #+#             */
/*   Updated: 2019/11/21 10:20:24 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	res;
	long long int	neg;

	neg = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
				*str == '\v' || *str == '\r' || *str == '\f'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * neg);
}

unsigned int	ft_lcm(unsigned int a, unsigned int b)
/*{
	int	i;

	a > b ? (i = a) : (i = b);
	if (a == 0 || b == 0)
		return (0);
	while (i)
	{
		if (i % a == 0 && i % b == 0)
			return (i);
		i++;
	}
	return (0);
}

or
*/
{
	unsigned int	i;
	unsigned int	lcm; //res
	unsigned int 	hcf; // highest common factor (or gcf, gcd)

	i = 1;
	lcm = 0;
	hcf = 0;
	if (a == 0 || b == 0)
		return (0);
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			hcf = i;
		i++;
	}
	lcm = (a * b) / hcf;
	return (lcm);
}


int		main(int argc, char **argv)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	if (argc != 3)
		return (0);
	else
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		printf("%d\n", ft_lcm(a, b));
	}
	return (0);
}
