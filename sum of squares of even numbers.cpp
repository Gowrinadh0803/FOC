#include<stdio.h>
int main()
{ int i,n,sum=0;
printf("enter tht limit:");
scanf("%d",&n);
for(i=0;i<=n;i++)
if(i%2==0)
{ sum+=i*i;}
printf("result:%d",sum);
return 0;
}
