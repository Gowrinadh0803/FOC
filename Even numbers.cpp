#include<stdio.h>
#include<conio.h>
int main()
{ int i=0,n;
printf("Enter the limit:");
scanf("%d",&n);
 printf("even numbers\n");
 for(i=0;i<=n;i++)
 if(i%2==0) 
 printf("%d\t",i);
return 0;
  
}
