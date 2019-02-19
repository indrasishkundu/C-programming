#include<stdio.h>
#include<conio.h>
void areaperi(int ,float*,float*);
int main()
{
	int r;
	float area,per;
	printf("\n Enter the radius--");
	scanf("%d", &r);
	areaperi(r,&area,&per);
	printf("\n Area=%f,\n Perimeter=%f",area,per);
    getch();
    return 0;
}
void areaperi(int x, float *y ,float *z)
{
	*y=3.14*x*x;
	*z=2*3.14*x;
}
