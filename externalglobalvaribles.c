// *** GLOBAL SCOPE ***
// global_count is a global variable declared in source code file
ExternelGlobalVAriablesInMultipleFiles.c
// To access it in this file, it must first be re-declared as an external variable in the global scope of this file along with the 'exern'keyword and its proper data type
// Then, it can be used as any ordinary global variable throughout this file as well

#include <stdio.h>

external int global_count;

void change_count_one(void)
{

    //code
    global_count = global_count + 1;
    printf("change_count_one() : Value of global_count in file_01 = %d\n",
    global_count);
}

















