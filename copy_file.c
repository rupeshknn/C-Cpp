#include <stdio.h>

main()
{
    int c;
    // c = getchar();
    while(c != EOF)
    {
        putchar(c);
        // printf("Hello %c",c);
        c=getchar();
        // c=getchar();
    }
    
}