#include <stdio.h>
main()
{
    int c, G, idx;
    G = -1;
    idx = 0;
    while ((c=getchar()) != EOF)
    {
        if (c != ' ')
        {   
            idx = 0;
            putchar(c);
        }

        if (c==' ')
        {
            if (c != G)
            {
                idx = idx + 1;
                putchar(c);
            }
            if (c == G)
            {
                idx = idx + 1;
                if (idx==1)
                    putchar(' ');
            }
            G = c;
        }
    }
    
}