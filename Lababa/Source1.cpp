#include <stdio.h>
#include <stdlib.h>

int main() {
	float a, b, c,d =1.05;
	printf("Enter deposite money\n");
	scanf_s("%f", &a);
	printf("Enter months\n");
	scanf_s("%f", &b);
	c = a * (d * (30 * b / 365));
	printf("Profit:\n");
	printf("%f", c);
	return 0;
}