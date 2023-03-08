/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:56:40 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/03/08 12:00:04 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_write(unsigned int number, char *base, int i, int *r)
{
	if (number > 0)
	{
		(*r)++;
		ft_write(number / i, base, i, r);
		write(1, &base[number % i], 1);
	}
}

int	ft_putnbr_base(int number, char *base)
{
	int				i;
	int				r;
	unsigned int	nbr;

	i = 0;
	r = 0;
	nbr = (number + UINT_MAX + 1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (number == 0)
	{
		write (1, &base[number % i], 1);
		return (1);
	}
	ft_write(number, base, i, &r);
	return (r);
}
