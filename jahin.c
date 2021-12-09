#include<stdio.h>
 main()
{
  int weekno;
printf("enter weekno(1-2)");
scanf("%d", & weekno);
switch( weekno)
{
case 1: printf("MONDAY");
break;
case 2: printf("TUESDAY");
break;
}
return 0;
}