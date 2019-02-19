/*krishnamurthy no*/
#include<stdio.h>
main()
{
	int i,j,x,sum=1,k=0,num,n;
	printf("Enter the value--->");
	scanf("%d",&n);
	num=n;
	while(num>0)
	{
		x=num%10;
		sum=1;
		for(i=x;i>=1;i--)
		{
			sum=sum*i;
		}
		k=k+sum;
		num=num/10;
	}
	if(num==k)
	{
		printf("%d is a not krishnamurthy no \n",n);
	}
	else
	{
		printf("%d is a krishnamurthy no \n",n);
	}
	return 0;
}
