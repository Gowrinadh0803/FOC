#include<stdio.h>
int main()
{ int i,n,avg,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  sum+=i;
  printf("The sum is:%d\n",sum);
  avg=sum/n;
  printf("The avg:%d\n",avg);
  return 0;
}
