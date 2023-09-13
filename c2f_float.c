// celcius to farenhieght with floats
#include<stdio.h>

int main()
{
    float farh, cel;
    float low, high, step;
    low = 0.0;
    high = 100.0;
    step = 9.5;
    cel = low;
    printf("\nconvert celcius to farenheight\n \n");
    printf("Celcius\tFarenheight\n");
    while (cel <= high)
    {
        farh = (9.0/5.0)*cel + 32.0;
        printf("%6.1f\t%10.2f\n",cel,farh);
        cel = cel + step;
    }
    return 0;
}