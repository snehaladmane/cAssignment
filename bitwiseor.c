#include <stdio.h>

int main(void)
{
    //function prototypes
    void PrintBinaryFormofnumber(unsigned int);

    //variable declarations
    unsigned int a;
    unsigned int b;
    unsigned int result;

    //code
    printf("\n\n");
    printf("Enter An Integer = ");
    scanf("%u", &a);

    printf("\n\n");
    printf("Enter Another Integer = ");
    scanf("%u", &b);

    printf("\n\n\n\n");
    result = a | b;
    printf("Bitwise OR-ing of \nA = %d(Decimal) and B = %d (Decimal) gives result %d (Decimal).\n\n", a, b, result);

    PrintbinaryFormOfNumber(a);
    PrintBinaryFormOfNumber(b);
    PrintBinaryFormOfNumber(result);

    return(0);

}

//***** BEGINNERS TO C PROGRAMMING LANGUAGE : PLEASE IGNORE THE CODE OF THE FOLLOWING FUNCTION SNIPPET 'PrintBinaryformOfNumber()'*****
//***** YOU MAY COME BACK TO THIS CODE AND WILL UNDERSTAND IT MUCH BETTER AFTER YOU HAVE COVERED : ARRAYS, LOOPS AND FUNCTIONS*****
//***** THE ONLY OBJECTIVE OF WRITTING THIS FUNCTION WAS TO OBTAIN THE BINARY REPRESENTATION OF DECIMAL INTEGERS SO THAT BIT-WISE AND-ing, OR-ing, COMPLEMENT AND BIT-SHIFTING COULD BE UNDERSTOOD WITH GREAT EASE *****

void printBinaryFormOfNumber(unsigned int decimal_number)
{
    //veriable declaration
    unsigned int quotient, remainder;
    unsigned int num;
    unsigned int_binary_array[8];
    int i;

    //code 
    for (i = 0; i < 8; i++ )
       binary_array[i] = 0;

    printf("The Binary form Of The Decimal Integer %d is\t = \t", decimal_number);
    num = deciaml_number;
    i = 7;
    while (num != 0)
    {
        quotient = num /2;
        reminder = num % 2;
        binary_array[i] = reminder;
        num = quotient;

    }
    for (i = 0; i <8 ; i++)
    printf("%u",binary_array[i]);

    printf("%u", binary_array[i]);
}
