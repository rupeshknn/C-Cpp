// celcius to farenhieght
#include<stdio.h>

main()
{
    int farh, cel;
    int low, high, step;
    low = 0;
    high = 100;
    step = 10;
    cel = low;
    printf("\nconvert celcius to farenheight\n \n");
    printf("celcius\tfarenheight\n");
    while (cel <= high)
    {
        farh = (9/5)*cel + 32;
        printf("%3d\t%3d\n",cel,farh);
        cel = cel + step;
    }
    return 0;
}