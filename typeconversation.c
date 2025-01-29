#include <stdio.h>

int main(void)
{
    //variable declarations
    int i, j;
    char ch_01, ch_02;

    int a, result_int;
    float f, result_float;

    int i_explicit;
    float f_explicit;

    //code
    printf("\n\n");

    // INTERCONVERSION AND IMPLICIT TYPE-CASTING BETWEEN 'char' AND 'int' TYPES....
    i = 70;
    ch_01 = i;
    printf("I = %d\n", i);
    printf("Character 1 (after ch_01 = i) = %c\n\n", ch_01);

    ch_02 = 'Q';
    j = ch_02;
    printf("Character 2 = %c\n", ch_02);
    printf("J (after j = ch_01 = i) = %c\n\n",j);

    //IMPLICIT CONVERSION OF 'int' TO 'float'....
    a = 5;
    f = 7.8f;
    result_float = a + f;
    printf("Integer a = %d And Floating-Point Number %f added Gives Floating - Point sum = %f\n\n", a,f, result_float);

    result_int = a + f;
    printf("Integer a = %d And Floating-Point Number %f Added Gives Integer Sum = %d\n\n",a, f, result_int);

    //EXPLICIT TYPE-CASTING USING CAST OPERATOR...
    f_explicit = 30.121995f;
    i_explicit = (int)f_explicit;
    printf("Floating Point Number which Will be Type Casted Explicitly = %f\n", f_explicit);
    printf("Resultant Integer After Explicit Type Casting of %f = %d\n\n", f_explicit, i_explicit);

    return(0);
}