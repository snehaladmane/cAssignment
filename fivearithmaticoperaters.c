#include <stdio.h>

int main(void)
{
    //variable declarations
    int a;
    int b;
    int result;

    //code
    printf(\n\n")
    printf("Enter A Number : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Another Number : ");
    scanf("%d", &b);

    printf("\n\n");

    //*** The Following Are The 5 Arithmeic Operators +, -, *, /, and %***
    //***Also, The Resultants Of The Arithmetic Operations In All The below Five Cases Have Been Assigned To The Variable 'result' Using the Assignment Operator (=)***
    result = a + b;
    printf("Addition Of A =%d And B = %d Gives %d.\n", a,b,result);

    result = a - b;
    printf("substraction of A = %d And B = %d Gives %d.\n", a,b result);

    result = a *b;
    printf("Multiplication of A = %d And B = %d Gives %d.\n", a,b,result);

    result = a / b;
    printf("a % b);
    printf("Division of A = %d And B = %d Gives %d.\n", a, b, result);

    printf("\n\n");

    return (0);
}