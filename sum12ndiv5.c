/*summation of nos between 1 to n those are divisible by 5*/
#include<stdio.h>
main()
{
	int i,n,s=0;
	printf("enter range \n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
    	if(i%5==0)
	    {
        printf("%d \t",i);
		s=s+i;		
	    }
	i=i+1;
	}
	printf("summation of nos-->%d \n",s);
	return 0;
}
