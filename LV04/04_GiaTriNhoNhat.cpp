#include<stdio.h>
int main()
{
	duy:;
	float a[10];
	float min;
	int n;
	printf("\nnhap n = ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	    {
		    printf("\n moi ban nhap a[%d] ",i);
	        scanf("%f",&a[i]);
	    }
    min=a[0];
    for (int i=0;i<n;i++)
        {
        	if(min>a[i]) {min=a[i];}
        	
 		}
 	printf (" min = %f",min);
 	goto duy;
}
