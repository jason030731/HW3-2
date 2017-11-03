#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
	unsigned long long int result;
	unsigned int number;
	printf("請輸入第幾個數\n");
	scanf_s("%u",&number);
	result = fibonacci(number);
	printf("%u\n",result);
	system("pause");
	return 0;
}
unsigned long long int fibonacci(unsigned int n)
{
	int i,c,d;
	int a = 0;
	int b = 1;
	d = n - 1;
	if (n != 0)
	{
		if (n = 1)
		{
			return 1;
		}
		else
		{
			for (i = 0; i < d; i++)
			{
				c = a + b;
				a = b;
				b = c;
			}
		}
		return c;
	}
	else
	{
	return 0;
	}
}