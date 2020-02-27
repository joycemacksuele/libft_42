/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:49:52 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/15 13:57:29 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
		return (1);
	return (0);
}

int		main(void)
{
	ft_putnbr(ft_isalnum(57));
	ft_putnbr(ft_isalnum(65));
	ft_putnbr(ft_isalnum(48));
	ft_putnbr(ft_isalnum(90));

	ft_putnbr(ft_isalnum(91));
	ft_putnbr(ft_isalnum(64));
	return (0);
}
