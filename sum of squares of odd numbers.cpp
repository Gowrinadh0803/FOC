#include<stdio.h>
int main()
{ int i,n,sum=0;
 printf("enter the limit:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
  if(i%2!=0)
  {sum+=i*i;
  }
  printf("Result:%d",sum);
  return 0;
}
