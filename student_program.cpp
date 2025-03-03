#include <stdio.h>
#include <string.h>

void reverse( char str1[] , char str2[]) ;

int main() {
    char text[ 50 ] = "You and Me ." ;
    char out [50 ] ; // ouY evoL I
    reverse( text , out) ;
    printf("%s\n" , out ) ;
    printf("%s\n" , out ) ;
    return 0 ;
}//end function

void reverse( char str1[] , char str2[] ) {
    int l = strlen(str1) ;
    for(int i = 0 ; i < l ; i++ ) {
        str2[i] = str1[l - i - 1] ;
    }//end for
    str2[l] = '\0' ;
}//end function
