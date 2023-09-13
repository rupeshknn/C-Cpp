#include<stdio.h>

void Increment_value(int a)
{
    a = a+1;
}
void Increment_reference(int* a)
{
    *a = *a+1;
}

int main()
{
    int a = 10;
    Increment_value(a);
    printf("a = %d\n",a);
    Increment_reference(&a);
    printf("a = %d\n",a);
}