/*odd even function*/
#include<stdio.h>
void oddeven(int x); //func declaration
void main()
{
	int a;
	printf("enter number-->");
	scanf("%d",&a);
	oddeven(a);
}
void oddeven(int x)
{
if(x%2==0)
{
	printf("this no is even");
}
else
{
	printf("this no is odd");
}
}
