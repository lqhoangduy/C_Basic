#include<stdio.h>
int main()
{
	int i,n,dem=0;
	printf(" Nhap n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
       {
       	if(i%2==0) dem++;
	   }
	printf("\n co %d so chan .",dem);
}
