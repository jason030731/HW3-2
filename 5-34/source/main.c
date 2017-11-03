#include <stdio.h> 
#include <stdlib.h> 

int power(int , int);
int main(void)
{
	int m,n,a;
	scanf_s("%d %d", &m, &n);
	a = power(m, n);
	printf("µª®×¡G%d\n", a);
	system("pause");
	return 0;
}

long int power(int x, int y)
{
	if (y >= 1)
	{
		long int result = x*power(x, y - 1);
		return result;
	}
	else
	{
		return 1;
	}
}