#include <stdio.h>

int main ()
{
    printf ("variable declarion \n");

    int a;
    float b;
    char c="B";
    long int d;
    double e;

    a=2;
    b=23.90;
    c="F";
    d=346666666;
    e=324.2222222222;

    printf("a, a%d \n",a);
    printf("b=, b%f \n",b);
    printf("c=F,c%c \n",c);
    printf("d=346666666,d%l \n",d);
    printf("e=324.2222222222, \n",e);

    return 0;
}
