/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:26:44 by jfreitas          #+#    #+#             */
/*   Updated: 2019/07/16 14:52:30 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh_str;
	size_t	i;

	fresh_str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (s == NULL || fresh_str == NULL)
		return (NULL);
	while (s[i])
	{
		fresh_str[i] = (*f)(s[i]);
		i++;
	}
	fresh_str[i] = '\0';
	return (fresh_str);
}

/*{
	char	*fresh_str;
	size_t	i;
	size_t	len;
	int		c;

	i = 0;
	len = ft_strlen(s) + 1;
	fresh_str = (char*)malloc(sizeof(char) * len);
	c = (*f)(s[++i]);
	if (s == NULL || fresh_str == NULL)
		return (NULL);
	ft_memset(fresh_str, c, len);
	return (fresh_str);
}*/

char	ft_test(char s)
{
	return (s + 1);
}

int 	main(void)
{
	char	*res;
	
	res = ft_strmap("12345", ft_test);
	ft_putstr(res);
	free(res);
	return (0);
}
