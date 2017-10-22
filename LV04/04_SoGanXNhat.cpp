#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,x,k;
	int a[10],b[10];
	printf(" Nhap vao so phan tu ");
	scanf("%d",&n);
	printf("\nNhap vao x , x = ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	   {
	   	printf(" Nhap a[%d]",i);
	   	scanf("%d",&a[i]);
	   }
	for(i=0;i<n;i++)
	   {
	   	b[i]=abs(a[i]-x);
	   	j=b[0];
	   	if(j>b[i])
	   	  {
	   	  	j=b[i];
	   	  //???? em khong biet lam sao tim gia tri a[i] tuong ung voi b[i] sau khi so sanh de in ra:((
		  }
	   }
	printf(" So gan gia tri x nhat la ");
}
