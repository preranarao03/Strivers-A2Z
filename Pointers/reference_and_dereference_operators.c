#include <stdio.h>

// use of reference (&) and dereference (*) operator

int main()
{

    int c;
    int a = 10, b = 9;
    int *p;
    int *q;
    p = &a;
    q = &b;
    printf("value of a is %d\n", a);
    printf("value of a is %d\n", *p);
    printf("the value of b is %d\n", b);
    printf("the value of b is %d\n", *q);
    printf("the address of a is %d\n", &a);
    printf("the address of a is %d\n", p);
    printf("the address of b is %d\n", &b);
    printf("the address of b is %d\n", q);

    return 0;
}