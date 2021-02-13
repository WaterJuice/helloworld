
#include <stdio.h>
#include <stdlib.h>

int
    main
    (
        int     ArgC,
        char**  ArgV
    )
{
    printf( "Hello World\n" );

#ifdef __linux__
    #ifdef __x86_64__ 
        printf( "Built for Linux x64\n");
    #else
        #error UNKNOWN
    #endif

    #ifdef __GNUC__ 
        printf( "GCC version: "__VERSION__"\n" );
    #else   
        #error UNKNOWN
    #endif
#endif

    return( 0 );
}
