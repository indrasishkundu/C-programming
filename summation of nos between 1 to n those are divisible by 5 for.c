/*summation of nos between 1 to n those are divisible by 5*/
#include<stdio.h>
main()
{
	int i,n,s=0;
	printf("summation of nos-> \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
    	if(i%5==0)
	    {
        printf("%d \t",i);		
	    }
	    s=s+i;
	}
	return 0;
}
