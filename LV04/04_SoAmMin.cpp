#include<stdio.h>
int main()
{
	int i,n;
	float a[10],min=9999;
	printf("Nhap vao so phan tu ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	    {
	    	printf(" Nhap vao a[%d]",i);
	    	scanf("%f",&a[i]);
		}
	for(i=0;i<n;i++)
	    {
	    	if(a[i]<0) 
			  {
			    if(a[i]<min)
	    	    {
	    	  	    min=a[i];
			    }
			    else min=min;
		      }
		    else
		    {
		    	a[i]=-1;
		    	break;
			}
		    
		}
	printf("so am be nhat la %f ",min);
}

