#include<stdio.h>
#include<string.h>

struct student{
	char name[10];
	int age;
	int classs;
};
void main()
{
	int i,n;
	printf("Enter no. of student :");
	scanf("%d",&n);
	
	struct student stu[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter the details of Student:\n");
		printf("Name:");
		scanf("%s",stu[i].name);
		printf("Age:");
		scanf("%d",&stu[i].age)	;
		printf("Class:");
		scanf("%d",&stu[i].classs);
	}
	printf("DISPLAY DETAILS OF STUDENT:\n");
	for(i=0;i<n;i++)
	{
		printf("\nName:%s",stu[i].name);
		printf("\nAge:%d",stu[i].age)	;
		printf("\nClass:%d",stu[i].classs);
		printf("\n");
	}
	
}
