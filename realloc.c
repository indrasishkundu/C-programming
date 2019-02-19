#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
	char *mem;
	mem=(char*)calloc(15,sizeof(char));
	if(mem==NULL)
	{
		printf("Couldnt able to allocate req ");
	}
	else
	{
		strcpy(mem,"CALLOC FUNCTION");
	}
	printf("dynamically allocated memory content ");
	mem=realloc(mem,100*sizeof(char));
	if(mem==NULL)
	{
		printf("couldnt able to allocate req")
	}
	else
	{
		strcpy(mem,"space is extended upto 100")
	}
		free(mem);
	getch();
	return 0:
}
