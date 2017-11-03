#include <stdio.h> 
#include <stdlib.h> 

int main(void) {
	int m, n;

	printf("¿é¤J¨â¼Æ¡G");
	scanf_s("%d %d", &m, &n);
	int s = m * n;

	while (n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}

	printf("LCM¡G%d\n", s / m);
	system("pause");
	return 0;
}