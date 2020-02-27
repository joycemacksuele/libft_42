/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:46:46 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/11 16:27:40 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return (*((unsigned char*)s1 + i) - *((unsigned char*)s2 + i));
	return (0);
}

int		main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "hels";
	s2 = "hello";
	s3 = "hels";
	s4 = "hello";
	printf("%s\n%s\n%d", s1, s2, ft_strncmp(s1, s2, 4));
	printf("\n%d", strncmp(s3, s4, 4));
	return (0);
}
