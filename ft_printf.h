/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:14:00 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/03/07 11:08:22 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *c);
int		ft_putnbr_itoa(va_list a);
int		ft_putnbr_base(int number, char *base);
int		ft_putnbr_base_void(unsigned long long number, char *base);
size_t		ft_strlen(const char *c);

#endif
