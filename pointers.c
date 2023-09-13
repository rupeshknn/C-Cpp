#include<stdio.h>

int main()
{
    int a;
    int* p;
    a = 10;
    p = &a;
    printf(" a = %d\n p = %d\n *p = %d\n &a = %d\n", a, p, *p, &a);
    // printf("p = %d\n, p+1 = %d\n", p, p+1);
}