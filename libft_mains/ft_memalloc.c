/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:28:13 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/21 15:22:29 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh_mem;

	fresh_mem = malloc(size); // or malloc(sizeof(void) * size) or malloc(sizeof(fresh_mem) * size)
	if (fresh_mem == NULL)
		return (NULL);
	else
		ft_bzero(fresh_mem, size); // or ft_memset(fresh_mem, '\0', size);
	return (fresh_mem);
}

/*int		main(void)
{
	size_t	size;

	size = (int)ft_memalloc(5);
	ft_putnbr(size);
	return (0);
}*/
