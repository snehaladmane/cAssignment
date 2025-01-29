#include <stdio.h> //'stdio.h' contains declaration of 'printf()'

// Entry-Point Function => main() => Valid Return Type(int) and 2 parameters (int argc, char *argc[])
int main(int argc, char *argv[])
{
    //variable declarations
    int i;

    //code
    printf("\n\n");
    printf("Hello World !!!\n\n"); //Library function
    printf("Number Of command Arguments = %d\n\n", argc);

    printf("Command Line Arguments Passed To This Program Are : \n\n");
    for (i = 0; i < argc; i++)
    {
        printf("Command Line Argument Number %d = %s\n", (i + 1), argv[1]);
    }
    printf("\n\n");
    return(0);
}
