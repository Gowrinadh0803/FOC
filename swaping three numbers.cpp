#include<stdio.h>
int main()
{ int a,b,c,d;
  printf("CONTENTS BEFORE SWAPPING:");
  printf("\na:");
  scanf("%d",&a);
  printf("b:");
  scanf("%d",&b);
  printf("c:");
  scanf("%d",&c);
  d=a;
  a=b;
  b=c;
  c=d;
  printf("AFTER SWAPPING:");
  printf("\na:%d",a);
  printf("\nb:%d",b);
  printf("\nc:%d",c);
  return 0;
  
  

}
