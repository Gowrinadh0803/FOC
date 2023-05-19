#include<stdio.h>
#include<conio.h>
int main()
{ int i,n,e=0,o=0,result;
 printf("enter the required limit of the number:\n");
 scanf("%d",&n);
 for(i=2;i<=n;i+=2)
 { e+=i;
 }
 for(i=1;i<=n;i+=2)
 {o+=i;
 }
 result=o-e;
 printf("the result is: %d",result);
 return 0;
 
}
