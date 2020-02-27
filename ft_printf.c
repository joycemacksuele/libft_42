/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 16:59:47 by jfreitas          #+#    #+#             */
/*   Updated: 2019/12/30 18:20:24 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

• You have to recode the libc’s printf function
• It must not do the buffer management like the real printf
• It will manage the following conversions: cspdiuxX%
• It will manage any combination of the following flags: ’-0.*’ and minimum field width
• It will be compared with the real printf
• man 3 printf / man 3 stdarg

int		ft_printf(const char *, ...)
