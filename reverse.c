#include<stdio.h>
int main()
{
 int num,rem,t,rev=0;
 printf("Enter a Number:");
 scanf("%d",&num);
t=num;
 while(num!=0)
 {
  rem=num%10;
  rev=rev*10;
  rev=rev+rem;
  num=num/10;
 }
 printf("Reverse of %d is %d",t,rev);
 return 0;
}