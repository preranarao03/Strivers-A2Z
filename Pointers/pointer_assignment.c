#include <stdio.h>

int main()
{

    int a = 10, b = 9;  // initialize 'a' and 'b' values
    int *p;             // intialize pointer 'p'
    int *q;             // intialize pointer 'q'
    p = &a;             // p contains address of 'a' variable and 'a' variable is of int datatype
    q = &b;             // q contains address of 'b' variable and 'b' variable is of int datatype
    *q = *p;            // value at address of 'a' = value at address of 'b'
    printf("%d\n", a);  // a=10
    printf("%d\n", *q); // *q=10
}