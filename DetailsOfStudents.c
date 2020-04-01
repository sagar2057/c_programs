#include<stdio.h>
struct student{
	int roll, marks;
	char name[20], remarks[50];
}stu[20];
int main()
{
	int i, n;
	printf("Enter the total number of students : ");
	for (i = 0; i < n; i++)
	{	
	    printf("Enter the roll number of the student %d : ", i + 1);
		scanf("%d", &stu[i].roll);
		printf("Enter the name of the student having roll no. %d : ", stu[i].roll);
		scanf("%s", &stu[i].name);
		printf("Enter the total marks obtained by %s : ", stu[i].name);
		scanf("%d", &stu[i].marks);
		printf("Enter the remarks of %s : ", stu[i].name);
		scanf("%s", stu[i].remarks);
	}
	printf("_________________________________________________\n");
	printf("Roll No.  Name\t\t Marks\t\t Remarks\n\n");
	printf("_________________________________________________\n");
	for (i = 0; i < 10; i++)
	printf("%d\t  %s\t\t %d\t\t %s\n", stu[i].roll, stu[i].name, stu[i].marks, stu[i].remarks);
	printf("_________________________________________________\n");
	return 0;
}
