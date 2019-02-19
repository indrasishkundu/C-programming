/*recursion*/
#include<stdio.h>
	long int fact=1;
	main()
	{
		int n;
		long int f;
		printf(" enter a no");
		scanf("%ld",&n);
		f=factorial(n);
		printf("factorial=%ld",f);
	}
	int factorial(int x)
	{
		if(x==1 || x==0)
		return 1;
		fact=x*factorial(x-1);
		return fact;
	}
