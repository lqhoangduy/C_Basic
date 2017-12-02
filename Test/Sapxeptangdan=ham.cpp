#include<stdio.h>
int tangdan(int a[],int i,int j, int k,int n);
int main()
{
    int i,j,k,n;
    int a[n];
	printf(" Nhap vao A phan tu : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   {
	   	printf("Nhap vao A[%d]",i);
	   	scanf("%d",&a[i]);
	   }
	printf("\nMang sau khi sap xep : ");
	for(i=0;i<n;i++)
	   {
	   	tangdan(a,i,j,k,n);
	   	printf("%d ",a[i]);
	   }
}
tangdan(int a[],int i,int j, int k,int n)
{
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
}
