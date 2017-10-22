#include<stdio.h>
int main()
{
	int i,n,k;
	int a[10],j;
	printf(" Nhap vao so phan tu ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   {
	   	printf("Nhap vao a[%d]",i);
	   	scanf("%d",&a[i]);
	   }
	for(i=0;i<n;i++)
	   {
	   	for(j=i+1;j<n;j++)
			  {
			    if(a[i]>a[j])
			     {
			     	k=a[i];
			     	a[i]=a[j];
			     	a[j]=k;
				 }
	   	      }
	   }
	for(i=0;i<n;i++)
	    printf("%d ",a[i]);
}
