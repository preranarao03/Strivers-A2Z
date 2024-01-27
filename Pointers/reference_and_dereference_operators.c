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
    printf("value of a is %d\n", a);        // value of a is 10
    printf("value of a is %d\n", *p);       // value of a is 10
    printf("the value of b is %d\n", b);    // the value of b is 9
    printf("the value of b is %d\n", *q);   // the value of b is 9
    printf("the address of a is %d\n", &a); // the address of a is -1150868572
    printf("the address of a is %d\n", p);  // the address of a is -1150868572
    printf("the address of b is %d\n", &b); // the address of b is -1150868576
    printf("the address of b is %d\n", q);  // the address of b is -1150868576

    return 0;
}