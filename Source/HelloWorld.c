
#include <stdio.h>
#ifdef __linux__
    #include <gnu/libc-version.h>
#endif

int
    main
    (
        int     ArgC,
        char**  ArgV
    )
{
    printf( "Hello World\n" );

#if defined( __linux__ )
    #ifdef __x86_64__ 
        printf( "Built for Linux x64\n" );
    #else
        #error UNKNOWN
    #endif

    #if defined( __clang__ )
        printf( "Clang version: "__clang_version__"\n" );
    #elif defined( __GNUC__ )
        printf( "GCC version: "__VERSION__"\n" );
    #else   
        #error UNKNOWN
    #endif

    printf( "glibc version: %d.%d\n", __GLIBC__, __GLIBC_MINOR__);
#elif defined( __WINNT__ )
    #ifdef __x86_64__ 
        printf( "Built for Windows x64\n" );
    #else
        #error UNKNOWN
    #endif

    #ifdef __MINGW64__
        printf( "(Mingw-64)\n" );
    #endif

    #ifdef __GNUC__ 
        printf( "GCC version: "__VERSION__"\n" );
    #else   
        #error UNKNOWN
    #endif
#endif

    return( 0 );
}
