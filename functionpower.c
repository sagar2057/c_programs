#include<stdio.h>
int power (int, int);
int main()
{
	int num_1, num_2, pwr;
	printf("Enter a number : ");
	scanf("%d", &num_1);
	printf("Enter an integer to raise %d : ", num_1);
	scanf("%d", &num_2);
	pwr=power(num_1, num_2);
	printf("%d raised by power of %d is %d", num_1, num_2, pwr);
}
int power (int n1, int n2)
{
	int i, pow = 1;
	for (i = 1; i <= n2; i++)
	pow *= n1;
	return pow;
}
