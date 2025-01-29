#include <stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{

    int iArray[NUM_ELEMENTS];
    int i, num, sum = 0;

    printf("\n\n");

    printf("Enter Integer Elements For Array : \n\n");
    for(i = 0; i < NUM_ELEMENTS; i++)
    {
        scanf("%d", &num);
        iArray[i] = num;

    }

    //** SEPARATING OUT EVEN NEUMBERS FROM ARRY ELEMENTS ***
    printf("\n\n");
    printf("Even Number Amongst The Array Elements Are : \n\n");
    for (i = 0; i < NUM_ELEMENTS; i++)
    {
        if((iArray[i] % 2 ) == 0)
          printf("%d\n", iArray[i]);
    }

    //** SEPARATING OUT ODD NUMBERS FROM ARRAY ELEMENTS **
    printf("\n\n");
    printf("Odd Number Amongst The Elements Are : \n\n");
    for (i = 0; i < NUM_ELEMENTS; i ++)
       {
        if ((iArray[i] % 2) != 0)
           printf("%d\n", iArray[i]);
       }
       return(0);

}