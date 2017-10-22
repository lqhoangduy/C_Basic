#include <stdio.h>
int main()
{
	int i,n;
	printf (" nhap vao so phan tu = ");
	scanf("%d",&n);
	int a[10];
	for(i=0;i<n;i++)
	   {
	   printf(" Nhap vao a[%d]",i);
	   scanf("%d",&a[i]);
       }
	for(i=0;i<n;i++)
	   {
	   if(a[i]%2==0)
	     { 
		 printf (" so chan dau tien la %d",a[i]);
		 goto stop;
	     }
	   else a[i]=-1;
	    }
	    stop:;
}
