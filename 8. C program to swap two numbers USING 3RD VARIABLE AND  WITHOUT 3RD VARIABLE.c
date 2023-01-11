#include<stdio.h>  
 int main()    
{    
int a, b,c,d,e;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
  c=a;
  d=b;
  printf("without using third variable");
printf("Before swap a=%d b=%d",a,b);      
a=a+b;    
b=a-b;    
a=a-b;    
printf("\nAfter swap a=%d b=%d",a,b);
  printf("with using third variable");
  e=c;
  c=d;
  d=e;
  printf("\nswapped values are %d %d",c,d);_
return 0;  
}   
