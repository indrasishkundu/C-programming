#include<stdio.h>

struct node 
{
	int roll;
	char name[10];
};

main()
{
	int i,n;
	struct node student[100];
	printf("enter the number of students-->");
	scanf("%d",&n);
	printf("enter student information 1 by 1--\n");
	for(i=0;i<n;i++)
	{
	   scanf("%d%s",&student[i].roll,student[i].name);
	}
	
	printf("student info--\n");
	for(i=0;i<n;i++)
	{
	printf("\nroll=%d,name=%s",student[i].roll,student[i].name);
    }
}
