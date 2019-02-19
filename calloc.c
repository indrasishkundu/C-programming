#include<stdio.h>
#include<conio.h>
int main ()
{
	char *mem;
	mem=(char*)calloc(15,size of(char));
	if(mem==NULL)
	{
		printf("Couldnt able to allocate req ");
	}
	else
	{
		strcpy(mem,"CALLOC FUNCTION");
	}
	printf("dynamically allocated memory content ");
	free(mem);
	getch();
	return 0:
}
