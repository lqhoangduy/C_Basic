#include<stdio.h>
int main()
{
	int i,n;
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	   {
	   	printf(" Nhap vao a[%d]",i);
	   	scanf("%d",&a[i]);
	   }
	printf("\nin lai mang: \n");
	for(i=0;i<n;i++)
	   {
	   	printf("%d ",a[i]);
	   }
}
