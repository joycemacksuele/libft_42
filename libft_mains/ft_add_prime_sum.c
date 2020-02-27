/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_prime_sum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 11:06:17 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/21 10:20:53 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_add_prime_sum(unsigned int n)
{
	unsigned int	i;
	unsigned int	res;

	res = 0;
	i = 2;
	if (n <= 1)
		return (0);
	while (i <= n)
	{
		if (is_prime(i) == 1)
			res = res + i;
		i++;				
	}
	return (res);
}

int		main(int argc, char **argv)
{
	unsigned int	nb;

	nb = 0;
	if (argc != 2 || argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	else
	{
		nb = ft_atoi(argv[1]);
		printf("%d\n", add_prime_sum(nb));
	}
	return (0);
}
