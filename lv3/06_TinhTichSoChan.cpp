#include<stdio.h>
int main()
{
	int n,i,tich;
	tich=1;
	printf("\nnhap n ");
	scanf("%d",&n);
	for (i=2;i<=2*n;i=(i+2))
	tich=tich*i;
	printf("tich = %d",tich);
}
