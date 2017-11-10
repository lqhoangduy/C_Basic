#include<stdio.h>
int main()
{
	int i;
	int a[5];
	for(i=0;i<5;i++)
	   {
	   	printf(" Nhap vao a[%d]",i);
	   	scanf("%d",&a[i]);
	   }
	printf("\nin lai mang: \n");
	for(i=0;i<5;i++)
	   {
	   	printf("%d ",a[i]);
	   }
}
