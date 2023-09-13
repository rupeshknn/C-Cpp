#include <stdio.h>

// 
// main()
// {
//     float farh;
//     for(farh=0; farh<=100; farh=farh+10)
//         printf("%5.0f\t%10.2f\n",farh,(5.0/9.0)*(farh-32));
// }

// using int and reverse order
main()
{
    int farh;
    for(farh=100; farh>0; farh=farh-10)
        printf("%5d\t%10d\n",farh,(5*(farh-32)/9));
}