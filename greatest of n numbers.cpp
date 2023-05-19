#include<stdio.h>
int main()
{ 
int n,num,large=0,i=0;
printf("Enter the limit:\n");
scanf("%d",&n);
printf("Enter the string:\n");
while(i<n)
 { 
 scanf("%d",&num);
 if(num>large)
 {
 large=num;
 }
 i+=1;
}
 printf("large:%d",large);
 return 0;
}
