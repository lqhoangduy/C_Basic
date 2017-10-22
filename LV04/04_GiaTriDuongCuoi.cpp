#include<stdio.h>
int main()
{
	int i,n,k;
	int a[10];
	printf("Nhap so phan tu = ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	    {
	    	printf(" Nhap vao a[%d]",i);
	    	scanf("%d",&a[i]);
		}
	duy:;
	for (i=0;i<n;i++)
	    {
	    	if(a[i]>0)
	    	{
	    		k=a[i];
	    		goto duy;
			}
			else 
			{
			a[i]=-1;
			break;
		    }
		}
	printf(" gia tri duong cuoi cung trong mang la %d ",k);
}
