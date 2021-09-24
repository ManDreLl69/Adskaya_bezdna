#include <stdio.h>
#include <stdlib.h>

int mai() {
	int a,b;
	printf("Enter three-digit number\n");
	scanf_s("%d", &a);
	b = a / 100 % 10;
	a = (a - (b * 100))*10 + b;
	printf("%d", a);
	
	return 0;
}
