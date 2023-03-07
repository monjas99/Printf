/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:53:24 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/03/07 11:03:25 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

static char	*ft_itoa(int n)
{
	char		*dst;
	int			len;
	long int	a;

	a = n;
	len = ft_len(n);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[len--] = '\0';
	if (a == 0)
		dst[0] = '0';
	if (a < 0)
	{
		dst[0] = '-';
		a = a * -1;
	}
	while (a > 0)
	{
		dst[len--] = a % 10 + '0';
		a = a / 10;
	}
	return (dst);
}

int		ft_putnbr_itoa(va_list a)
{
	char	*c;
	int		r;

	c = ft_itoa(va_arg(a, int));
	r = ft_putstr(c);
	return (r);
}
