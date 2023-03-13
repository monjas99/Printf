#include "ft_printf.h"

int main()
{
	int i = 574;
	char *c = "hola mundo";
	int *d = &i;
	char j = 't';

	
	ft_printf("Imprimir un caracter:\n");
	printf("Printf original: %c\n", j);
	ft_printf("ft_printf: %c\n", j);
	
	ft_printf("Imprimir un string:\n");
	printf("Printf original: %s\n", c);
	ft_printf("ft_printf: %s\n", c);
	
	ft_printf("Imprimir un numero:\n");
	printf("Printf original: %d\n", i);
	ft_printf("ft_printf: %d\n", i);
	
	ft_printf("Imprime un unsigned:\n");
	printf("Printf original: %u\n", i);
	ft_printf("ft_printf: %u\n", i);

	ft_printf("Imprime un puntero:\n");
	printf("Printf original: %p\n", d);
	ft_printf("ft_printf: %p\n", d);

	ft_printf("Imprime en hexadecimal en minus:\n");
	printf("Printf original: %x\n", i);
	ft_printf("ft_printf: %x\n", i);

	ft_printf("Imprime un hexadecimal en mayus\n");
	printf("Printf original: %X\n", i);
	ft_printf("ft_printf: %X\n", i);

	ft_printf("Imprime un %%\n");
	printf("Printf original: %%\n");
	ft_printf("ft_printf: %%\n");


//	gcc ft_printf.c ft_putnbr.c ft_putnbr_base_void.c ft_strlen.c ft_putchar.c ft_putnbr_base.c ft_putstr.c main.c
	return (0);
}
