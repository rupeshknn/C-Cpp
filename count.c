#include<stdio.h>
main()
{
    int i;
    i=0;
    while (getchar() != EOF)
        i=i+1;
    printf("%d",i);
}