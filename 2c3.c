#include<stdio.h>
int main()
{
    int basic_sal,ded,net_sal;
    float DA,HRA;
    DA=75/100*basic_sal;
    HRA=15/100*basic_sal;
    net_sal=basic_sal+DA+HRA-ded;
    printf("enter the basic_sal:%d\n");
    scanf("%d",&basic_sal);
    printf("enter the ded:%d\n");
    scanf("%d",&ded);
    printf("enter the net_sal:%d\n",net_sal);
    return 0;

}
