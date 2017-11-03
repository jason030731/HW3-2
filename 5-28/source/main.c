#include<stdio.h> 
#include<stdlib.h> 

int main(void)
{
	char a, b;
	scanf_s(" %c", &a);
	if (a>91)
	{
		b = a - 32;
		printf("%c\n", b);
	}
	else if (a<91)
	{
		b = a + 32;
		printf("%c\n", b);
	}

	system("pause");
	return 0;
}