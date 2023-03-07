/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:16:06 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/03/07 11:02:00 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags(va_list a, int *r, char c)
{

	if (c == 'c')
		r += ft_putchar(va_arg(a, int));
	else if (c == 's')
		r += ft_putstr(va_arg(a, char *));
	else if (c == 'd' || c == 'i')
		r += ft_putnbr_itoa(a);

}

int	ft_printf(const char *str, ...)
{
	va_list		a;
	char		*c;
	size_t		i;
	int			r;

	i = 0;
	r = 0;
	c = (char *)str;
	va_start(a, str);
	while (c && i < ft_strlen(str))
	{
		if (*c != '%')
			r += ft_putchar(*c);
		else if (*c == '%')
		{
			c++;
			ft_flags(a, &r, *c);
			i++;
		}
		c++;
		i++;
	}
	va_end(a);
	return (r);
}

