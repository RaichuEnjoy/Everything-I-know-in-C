//this code doesn't really do what I want but it shows of sleep.
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

//basically a linux simulator (won't work on linux)
int main() {
    //you've seen this before
    int i = 0;
    while (i <= 1000000000000000) {
        //doesn't do what I want
        printf("Downloading: ");
        printf(i + " Percent\n");
        //time to wait (milliseconds)
        Sleep(10);
        i++;
    }
    return 0;
}