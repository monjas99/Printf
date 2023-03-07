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

int	ft_putnbr_base(int number, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (NULL);
		i++;
	}
	if (number == 0)
	{
		write (1, base[number % i], 1);
	}
	/*
	 * if
	 * number < 0
	 *else 
	 Fucnion aparte recursiva con el write
*/
	return (i);
}
