#include<stdio.h>
int main()
{
	int i,n,min=9999;
	int a[10];
	printf("Nhap vao so phan tu mang");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   {
	   	printf("Nhap vao a[%d]",i);
	   	scanf("%d",&a[i]);
	   }
	for(i=0;i<n;i++)
	   {
	   	if(a[i]%2==0)
	   	   {
	   	   	if(a[i]<min)
				  {min=a[i];
				  }
			  }
			}
	if (min!=0) printf(" so chan nho nhat la %d",min);
	else a[i]=-1;	
}
