#include<stdio.h>

int main() {
	int num1,num2,num3,temp;
	printf("Introduce tres numeros enteros:\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	if (num1>num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num1>num3) {
		temp = num1;
		num1 = num3;
		num3 = temp;
	}
	if (num2>num3) {
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	printf("Los números en orden ascendente son: %d %d %d\n", num1, num2, num3);
	return 0;
}
