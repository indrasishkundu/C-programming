/*printing of 1 to n those are divisible by 3*/
#include<stdio.h>
main()
{
	int i,n;
	printf("print nos till--> \n");
	scanf("%d",&n);
	printf("all nos from 1 to %d divisible by 3-->\n",n);
	i=1;
	while(i<=n)
	{
		 if(i%3==0)
		{
			printf("%d \t",i);
		}
			i=i+1;
	}
	return 0;
}
