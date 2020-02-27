/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 10:30:54 by jfreitas          #+#    #+#             */
/*   Updated: 2019/11/14 13:27:04 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The calloc() function contiguously allocates enough space for count objects that are size bytes of mem-
   ory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of
   value zero */

void	*ft_calloc(size_t count, size_t size)
{
	return (ft_memalloc(count * size));
}


/*
or
void	*ft_calloc(size_t count, size_t size)
{
	void	*fresh_mem;

	fresh_mem = malloc(size * count);
	if (fresh_mem == NULL)
			return (NULL);
	else 
		ft_memset(fresh_mem, 0, count * size);
	return (fresh_mem);
}
*/

int		main(void)
{
	int i;
	int	count;
	int *numbers;

	printf("Number of elements to be entered:");
	scanf("%d",&count);
	numbers = (int*)calloc(count, sizeof(int));
	printf("Enter %d numbers:\n",count);
	i = 0;
	while (i < count)
	{
		scanf("%d",&numbers[i]);
		i++;
	}
	printf("The numbers entered are: ");
	i = 0;
	while (i < count)
	{
		printf("%d ",numbers[i]);
		i++;
	}
	free(numbers);
	return(0);
}
