#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
	int size = 0;
	printf("char:\n");
	size = ft_printf("%c%c%c%c%c%c%c%c%c%c%c", 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd');
	printf("   -----   size == %d\n", size);

	printf("str:\n");
	size = ft_printf("%s", "hello world");
	printf("   -----   size == %d\n", size);

	char *p;
	printf("str (case null):\n");
	size = ft_printf("%s", p);
	printf("   -----   size == %d\n", size);

	printf("int:\n");
	size = ft_printf("%d e %i", INT_MAX, INT_MIN);
	printf("   -----   size == %d\n", size);

	printf("hex:\n");
	size = ft_printf("%x and %X", -1232323, 232367);
	printf("   -----   size == %d\n", size);

	printf("pointer (case null):\n");
	size = ft_printf("%p", p);
	printf("   -----   size == %d\n", size);
}
