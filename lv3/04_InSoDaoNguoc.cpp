#include<stdio.h>
int main()
{
	int n,i;
	printf("nhap vao n ");
	scanf("%d",&n);
	while(n>0)
	{i=n%10;
	printf(" %d ",i);
	n=n/10;
	}
}
