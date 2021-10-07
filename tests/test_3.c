#include "../main.h"

/**
 *
 */


void print_x_and_y(int x, int y)
{
	printf("\nx = %d\n", x);
	printf("y = %d\n\n", y);
}

int main(void)
{
	/* Binary printing test */
	_printf("Binary %b", 98);
	_printf("\n 0 = %b", 0);
	_printf("\n 1 = %b", 1);
	_printf("\n 2 = %b", 2);
	_printf("\n 3 = %b", 3);
	_printf("\n 4 = %b", 4);
	_printf("\n 5 = %b", 5);
	_printf("\n 476 = %b", 476);
	_printf("\n 6 = %b\n", 6);
	return (0);
}
