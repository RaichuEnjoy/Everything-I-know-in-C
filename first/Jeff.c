//includes standard input/output, standard library, and my custom header.
#include <stdio.h>
#include <stdlib.h>
//uses quotes because the header is not a standard c header
#include "first.h"

int main() {
    //variable i is 0
    int i = 0;
    //while i is less than or equals 100
    while (i <= 100) {
        //runs custom function from the header file
        Jeffrey();
        //increases i
	    i++;
    }
    //gets a character so that the window only closes when a key is pressed
    getchar();
    //ends program without error
    return 0;
}