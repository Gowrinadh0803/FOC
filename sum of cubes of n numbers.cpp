#include<stdio.h>
#include<math.h>
int main()
{ int n,i,sum=0;
 printf("Enter the limit:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { sum+=i*i*i;
 }
 printf("sum of cubes:%d",sum);
 return 0;
 
}
