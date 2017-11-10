#include<stdio.h>
int main()
{
	int i,j,x=0;
	int a[5][5];
	for(i=0;i<5;i++)
	   {
	   	for(j=0;j<5;j++)
	   	  {
	   	  	x++;
	   	  	printf(" %d ",x);
		  }
		printf("\n");
	   }
}
