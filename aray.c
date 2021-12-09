#include<stdio.h>
int main()
{
int a[5];
a[0]=1;
a[1]=3;
a[2]=5;
printf("a[2]=%d stored in memory location %u",a[2],&a[2]);
    return 0;
}