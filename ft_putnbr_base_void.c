/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:56:40 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/03/07 13:10:17 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_write(unsigned long long number, char *base, int i, int *r)
{
	if (number > 0)
	{
		(*r)++;
		ft_write(number / i, base, i, r);
		write(1, &base[number % i], 1);
	}
}

int	ft_putnbr_base_void(unsigned long long number, char *base)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (number == 0)
	{
		write (1, &base[number % i], 1);
	}
	if (number < 0)
		ft_putnbr_base_void(number * -1, base);
	ft_write(number, base, i, &r);
	return (r);
}
