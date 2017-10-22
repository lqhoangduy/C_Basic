#include<stdio.h>
int main()
{int n,i,s1;
float s2;
s1=s2=0;
printf("nhap n tu ban phim = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
   {s1=s1+i;
    s2=s2+(1/i);}
printf("\ntong s1 la = %d",s1);
printf("\ntong s2 la = %f",s2);
}
