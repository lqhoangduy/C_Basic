#include<stdio.h>
int main()
{
	int i,n,k;
	printf("Nhap so phan tu n : ");
	scanf("%d",&n);
	printf("\nNhap vao k : ");
	scanf("%d",&k);
	for(i=1;i<=n;i++)
      {
      	if(i%k==0)
      	  {
      	  	printf("so chia het cho %d la %d \n",k,i);
			}
      	
	  }
}
