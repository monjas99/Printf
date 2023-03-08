/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:16:06 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/03/08 11:58:06 by dmonjas-         ###   ########.fr       */
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
	else if (c == 'u')
		r += ft_putnbr_base(av_arg(a, int), "0123456789");
	else if (c == 'p')
	{	
		r += ft_putstr("0x");	
		r += ft_putnbr_base_void(va_arg(a, unsigned long), "0123456789abcdef");
	}
	else if (c == 'x')
		r += ft_putnbr_base(va_arg(a, int), "0123456789abcdef");
	else if (c == 'X')
		r += ft_putnbr_base(va_arg(a, int), "0123456789ABCDEF");
	else if (c == '%')
		r += ft_putchar('%');
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

