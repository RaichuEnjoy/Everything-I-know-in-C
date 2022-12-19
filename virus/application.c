//includes specific windows library that has sound and message boxes
#include <winuser.h>
//main loop
int main() {
    //integer i = 0
    int i = 0; 
    //while i is not 1,000,000,000,000
    while (i < 1000000000000) { 
        //plays sound (look at microsoft win32 docs to learn differnt sounds)
        MessageBeep(MB_ICONERROR); 
        //displays message box, again look at microsoft win32 docs to see what this does
        MessageBox(0, "Fatal Memory Leak, Cannot Run", "Fatal Error", 0);
        //adds 1 to i
        i++;
    } 
    //closes program
    return 0;
}