#include<stdio.h>
int main()
{
  int n,tong;
  do
  {
  	printf("\nnhap n ");
  	scanf("%d",&n);
  	tong=tong+n;
  	printf("\n tong la %d",tong);
  }
  while(n>0);
}
