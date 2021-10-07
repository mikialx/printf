#include "main.h"

/**
 * put_binary - converts @n to binary and prints it
 * @n: number to be converted to binary
 *
 * Return: passes the binary version of @n to put_int to print it
 */

int put_binary(unsigned int n)
{
	int binary_num = 0;
	int remainder, digit_position = 1;

	while (n != 0)
	{
		remainder = (int) n % 2;
		n /= 2;
		binary_num += remainder * digit_position;
		digit_position *= 10;
	}

	return (put_int(binary_num));
}
