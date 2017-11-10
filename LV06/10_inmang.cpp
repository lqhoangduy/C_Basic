#include<stdio.h>
int main()
{
	int i,j,x=1;
	int a[5][5];
	for(i=0;i<5;i++)
	   {
	   	for(j=0;j<5;j++)
	   	  {
	   	  	a[i][j]=x++;
		  }
	   }
    for(j=0;j<5;j++)
	   {
	   	for(i=0;i<5;i++)
	   	   {
	   	   	printf("%d ",a[i][j]);
			}
		printf("\n");
	   }
}
