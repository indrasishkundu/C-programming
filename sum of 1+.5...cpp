/*summation of series 1+1/2+1/3+...*/
#include<stdio.h>
main()
{
	double no,i,sum=0;
	printf("\n Enter a no-->");
	scanf("%lf",&no);
	for(i=1;i<=no;i++)
	{
		sum=sum+(1/i);
		if(i==1)
		{
			printf("1+");
		}
		else if(i==no)
		printf("(1/%lf)",i);
		else
		{
			printf("(1/%lf)+",i);
		}
	}
	printf("\n the sum of the following series is %.5lf",sum);
	return 0;
}

