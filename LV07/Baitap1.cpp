#include<stdio.h>
int main()
{
	int n,i,j,k,m;
	printf("Cho so tu nhien n so , nhap n: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		{
			printf("Nhap a[%d]",i);
			scanf("%d",&a[i]);
		}
	printf("Day so ban dau la :");
	for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
// Xuat day so theo thu tu nguoc lai
	printf("\nDay so theo thu tu nguoc lai : ");
	for(i=(n-1);i>=0;i--)
		{
			printf("%d ",a[i]);
		}
// Sap xep day so
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
					{
						m=a[i];
						a[i]=a[j];
						a[j]=m;
					}
			}
	printf("\nSap xep day so ta duoc: ");
	for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
// In cac so chan trong day so
	printf("\nCac so chan trong day so la: ");
	for(i=0;i<n;i++)
		{
			if(a[i]%2==0) printf("%d ",a[i]);
		}	
// Xoa gia tri k trong day so
	printf("\nNhap gia tri k can xoa: ");
	scanf("%d",&k);
	int d=0;
	for(i=0;i<n;i++)
		{
			if(a[i]==k)
			{
				for(int j=i;j<n-1;j++)
					a[j]=a[j+1];
				n--;
				d++;	
			}
		}
	if(a[n]==k) n--;
	if(d==0) printf("\nKhong co gia tri can xoa trong mang. ");
	if(n==0) printf("\nMang da xoa hoan toan.");
	printf("Day so sau khi xoa la : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
