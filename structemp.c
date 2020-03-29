#include<stdio.h>
struct employee{
	char name[50], addr[50];
	int age;
	float salary;
}emp[100];
int main()
{
	int i, n;
	float avg, sum = 0;
	printf("Enter the total numbers of employees:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter the name of employee %d : ", i + 1);
		scanf("%s", emp[i].name);
		printf("What is the age of %s ? : ", emp[i].name);
		scanf("%d", &emp[i].age);
		printf("How much does %s earn ? : ", emp[i].name);
		scanf("%f", &emp[i].salary);
		printf("Where does %s live ? : ", emp[i].name);
		scanf("%s", &emp[i].addr);
		sum = sum + emp[i].salary;
		avg = sum / n;
	}
	printf("\n_________________________________________________________________________\n");
	printf("Name\t\t|   Age\t\t| Address\t| Salary\t\t |\n");
	printf("________________|_______________|_______________|________________________|\n");
	for (i = 0;  i < n; i++)
	{
		printf("%s\t\t|    %d\t\t| %s\t\t| %.0f\t\t\t |\n", emp[i].name, emp[i].age, emp[i].addr, emp[i].salary);
		printf("________________|_______________|_______________|________________________|\n");
	}
	printf("\nThe average salary of %d employees is %.2f", n, avg);
}
