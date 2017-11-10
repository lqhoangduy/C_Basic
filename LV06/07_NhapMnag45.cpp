#include<stdio.h>
int main()
{
	int i,j;
	int a[4][5];
	for(i=0;i<4;i++)
	  for(j=0;j<5;j++)
	     {
	     	printf("Nhap a[%d][%d]",i,j);
	     	scanf("%d",&a[i][j]);
		 }
	printf("In lai mang: \n");
	for(i=0;i<4;i++)
	  {
	   for(j=0;j<5;j++)
	     {
	     	printf("%d ",a[i][j]);
		 }
		printf("\n");
      }
}
