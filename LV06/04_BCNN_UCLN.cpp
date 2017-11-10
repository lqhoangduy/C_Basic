#include<stdio.h>
int main()
{
	int a,b,bcnn,ucln;
	printf("Nhap vao a : ");
	scanf("%d",&a);
	printf("\nNhap vao b: ");
	scanf("%d",&b);
	bcnn=a*b;
	while(a!=b)
	  {
	  	if(a>b) a-=b;
	  	else b-=a;
	  }
	ucln=a;
	bcnn=bcnn/ucln;
	printf("uclm=%d\nbcnn=%d",ucln,bcnn);
}
