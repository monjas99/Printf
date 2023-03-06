/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:16:06 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/03/06 16:16:23 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		v;
	char		*str2;
	size_t		i;
	size_t		k;

	i = 0;
	k = 0;
	str2 = (char *)str;
	va_start(v, str);
	while (str2 && i < ft_strlen(str))
	{
		if (*str2 != '%')
			k += ft_putchar_fd(*str2, 1);
		else if (*str2 == '%')
		{
			str2++;
			ft_printf_handler(v, &k, *str2);
			i++;
		}
		str2++;
		i++;
	}
	va_end(v);
	return (k);
}

