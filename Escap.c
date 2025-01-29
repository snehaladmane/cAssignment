#include <stdio.h>
int main(void)
{
    // code
    printf("\n\n");
    printf("Going to Next line...\n\n");
    printf("Demonstating \t Horizontal \n\n");
    printf(" This is A Single Quoted Output\" Done Using \\\");
    printf("\'This is a Single Quoted Output \' Done Using\\\' \\\' Escap Sequence\n\n");
    printf("BACKSPACE Turned To BACKSPACE\b Using Escape Sequence \\b\n\n");
    printf("\r Demonstrating Carring Return Using \\r Escape Sequence\n");
    printf("Demonstrating \r Carriage Return Using \\r Escape Sequence\n");
    printf("Demonstrating Carriage \r REturn Using \\r Escape Sequence\n\n");

    printf("Demonstrating \x41 Using \\xhh Escape Sequence\n\n"); //0x41 is the Hexadecimal Code 
    for Letter 'A'.'xhh' is The Place-holder For 'x'Following by 2 digits (hh), altogether formaing a Hexadecimal Number.

    printf("Demonstrating \102 Using \\ooo Escape Sequence\n\n");
    //102 is the Octal code For Letter 'B'.'ooo'Is the place-holder For 3 Digits Forming An Octal Number.

    return(0);
}

