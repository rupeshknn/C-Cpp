#include<stdio.h>

int main()
{
    int int1;
    char char1;
    float float1;
    double double1;
    
    int* int1p = &int1;
    char* char1p = &char1;
    float* float1p = &float1;
    double* double1p = &double1;

    printf("int size = %d\n",sizeof(int1));
    printf("char size = %d\n",sizeof(char1));
    printf("float size = %d\n",sizeof(float1));
    printf("double size = %d\n",sizeof(double1));

    int1 = 5;

    printf("a = %d, p = %d, *p = %d, &a = %d\n", int1, int1p, *int1p, &int1);
    printf("p = %d, p+1 = %d\n", int1p, int1p+1);
}