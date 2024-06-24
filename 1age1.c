#include<stdio.h>
int main()
{
 int number,rev=0,i;
 printf("enter  the number\n");
 scanf("%d",&number);
 while(number>0)
 {
  i=number%10;
  rev=rev*10+i;
  number=number/10;
 }
 printf("The rev of a given number is %d\n",rev);
 return 0;
}

