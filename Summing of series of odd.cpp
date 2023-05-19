#include<stdio.h>
int main()
{ int i,n,sum=0;
printf("enter any number\n");
scanf("%d",&n);
for(i=1;i<=n;i+=2)
{ sum +=i; }
printf("sum of even numbers from 0 to %d = %d",n,sum);
return 0;
}
