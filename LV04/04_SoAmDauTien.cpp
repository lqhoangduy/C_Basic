#include<stdio.h>
int main()
{
	int i,n;
	int a[10];
	printf("Nhap vao so phan tu ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    { 
	    printf(" Nhap vao a[%d]",i);
	    scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
	    {
	    if(a[i]<0) 
	    {
		printf("So am dau tien la %d",a[i]);
		goto stop;
	 }
	    else a[i]=-1;
		}
		stop:;
}
