#include "factor.h"

/**
 * factorize - The function that factorizes the numbers
 * @buffer: Address of the number.
 * Return: int
 */
int factorize(char *buffer)
{
	u_int32_t val;
	u_int32_t num;

	val = atoi(buffer);

	for (num = 2; num < val; num++)
	{
		if (val % num == 0)
		{
			printf("%d=%d*%d\n",val,val/num,num);
			break;
		}
	}
	return (0);
}
