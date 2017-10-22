#include<stdio.h>
int main()
{
int a=1,n,tich=1;
printf("nhap n = ");
scanf("%d",&n);
  do  {tich=tich*a++;
       }
  while(a<=n);
printf("tich cua %d so la = %d",n,tich);
}
