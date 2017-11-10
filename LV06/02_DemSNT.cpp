#include<stdio.h>
int main()
{
	int i,j,n,dem=0,snt=0;
	printf(" Nhap n ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	   {
	   	dem=0;
	   	for(j=1;j<=i;j++)
	   	{ 
		   if(i%j==0) dem++;
	    }
	    if(dem==2) snt++;  
	   }
	   
	printf(" co tat ca %d so nguyen to trong %d so dau tien  ",dem,n);
}
