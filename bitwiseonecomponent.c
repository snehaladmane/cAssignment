#include <stdio.h>

int main(void)
{
    //function prototypes
    void PrintBinaryFormOfNumber(unsigned int);

    //variable declaration
    unsigned int a;
    unsigned int result;

    //code
    printf("\n\n");
    printf("Enter An Integer = ");
    scanf("%u", &a);

    printf("\n\n\n\n");
    result = ~a;
    printf("Bitwise COMLEMENTING of \nA = %D(Deciaml) gives result %d (Decimal).\n\n", a, result);
    PrintBinaryFormOfNumber(a);
    PrintBinaryFormOfNumber(result);

    return(0); 
}

// ***** BEGINNERS TO C PROGRAMING LANGUAGE : PLEASE IGNORE THE CODE OF THE FOLLOWING FUNCTION SNIPPET 'PrintBinaryFormOfNumber()'*****
// ***** YOU MAY COME BACK TO THIS CODE AND WILL UNDERSTAND IT MUCH BETTER AFTER YOU HAVE COVERD : ARRAYS, LOOPS AND FUNCTION *****
// ***** THE ONLY OBJECTIVE OF WRITTING THIS FUNCTION WAS TO OBTAIN THE BINARY REPRESENTATION OF OBJECTIVE OF DECIMAL INTEGERS SO THAT BIT-WISE AND-ing, OR-ing, COMPLEMENT AND BIT-SHIFTING COULD BE UNDERSTOOD WITH GREAT EASE ******

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
  // variable declaration
  unsigned int quotient, remainder;
  unsigned int num;
  unsigned int binary_array[8];
  int i;

  //code 
  for (i = 0; i < 8; i++)
      binary_array[i] = 0;

      printf("The Binary Form Of The Decimal Integer %d Is %d\t = \t", decimal_number);
      num = decimal_number;
      i = 7;
      while (num != 0)
      {
        quotient = num / 2;
        reminder = num %2;
        binary_array[i] = remainder;
        num = quotient;
        i--;

      } 
      for (i = 0; i < 8; i++)
      printf("%u", binary_array[i]);

      printf("%u", binary_array[i]);
      
}