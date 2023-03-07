/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:39:06 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/03/07 11:20:19 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	char	c = 's';
	char	*s = "String de prueba";
	int		i = 1;
	int		j = 123456789;

	ft_printf("Imprime un caracter: %c", c);
	printf("\n");
	ft_printf("Imprime un strig: %s", s);
	printf("\n");
	ft_printf("Imprime un numero: %i", i);
	printf("\n");
	ft_printf("Imprime una cadena de numeros: %d", j);
	printf("\n");
	ft_printf("Imprime un porciento: %%");
	printf("\n");
	return (0);
}
