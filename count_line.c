#include <stdio.h>
int main()
{
    int nl, c;
    nl = 0;
    while ((c=getchar()) != EOF)
    {
        if (c==910)
        {
            nl=nl+1;
        }
    }
    printf("%d",nl);
    return 0;
}
