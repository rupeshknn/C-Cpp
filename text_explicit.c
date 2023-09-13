#include <stdio.h>
main()
{
    int c, G, idx;
    G = -1;
    idx = 0;
    while ((c=getchar()) != EOF)
    {
        if(c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(c);
    }
    
}