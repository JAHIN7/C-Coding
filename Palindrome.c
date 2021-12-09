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
 /*printf("Reverse of %d is %d",t,rev);*/
 if(rev==t)
{
 printf("It is Palindrome.");
}
else 
printf("It is not Palindrome.");
 return 0;
}