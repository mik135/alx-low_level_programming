#include <stdio.h>
/**
* main - prints the sum of all multiples of 3 or 5 below 1024
*
* Return: 0
*/
int main(void)
{
	int m_one, sum;

	sum = 0;

	for (m_one = 0; m_one < 1024; m_one++)
	{
		if (m_one % 3 == 0 || m_one % 5 == 0)
		{
			sum += m_one;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
