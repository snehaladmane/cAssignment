#include <stdio.h>

int main(void)
{
    // variable declarations
    int a;
    int b;
    int result;

    //code
    printf("\n\n");
    printf("Enter One Integer :");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Another Integer : ");
    scanf("%d", &b);

    printf("\n\n");
    printf("If Answer = 0, It Is 'FALSE'.\n");
    printf("If Answer = 1, It Is 'TRUE'.\n\n");

    result = (a < b);
    printf("(a < b) A = %d Is less Than  B = %d\t Answer = %d\n", a,b,result);

    result = (a > b);
    printf("(a > b)A = %d Is Greater Than B= %d\t Answer = %d\n", a,b,result);

    result = (a <= b);
    printf("(a <= b) A = %d is less Than or equal to B = %d\t Answer = %d\n", a, b, result);

    result = (a >= b);
    printf("(a >= b) A = %d is Greater than or Equal to B = %d\t Answer = %d\n", a,b, result);

    result = (a == b);
    printf("(a == b)A = %d is equal To B = %d\t Answer = %d\n", a,b,result);

    result = (a != b);
    printf("(a != b)A = %d is NOT equal to B = %d\t Answer = %d\n",a,b, result);

    return(0);
}