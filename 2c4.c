#include<stdio.h>
int main()
{
    int a,b,c,s,area;
    printf("enter the values for a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle a,b,c=%d\n",area);
    return 0;
}
