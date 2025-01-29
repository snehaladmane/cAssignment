#include <stdio.h>

int main(void)
{
    // variable declarations
    int a;
    int b;
    int result;

    //code
    printf("\n\n");
    printf("Enter First Integer :");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Second Integer : ");
    scanf("%d",&b);
    
    printf("\n\n");
    printf("Enter Third Integer :");
    scanf("%d", &c);

    printf("\n\n");
    printf("If Answer = 0, It Is 'FALSE'.\n");
    printf("If Answer = 1, It Is 'True'.\n");

    result = (a <= b ) && (b != c);
    printf("LOGICAL AND (&&): Answer is TRUE(1) If And Only If BOTH Conditions Are True. The Answer is FAlse.\n\n");
    printf("A = %d is Less Than or Equal To B = %d Is NOT Equal To c = %d\t Answer = %d\n\n",a,b,b,c, result);

    result = (b >= a) || (a == c);
    printf("LOGICAL OR (||) : Answer is FALSE (0) If And Only If BOTH Conditions Are False. The Answer is TRUE (1), If Any One Or BOTH Condition Are True.\n\n");
    printf("Either B = %d Is Greater Than Or Equal To A = %d OR A = %d Is Equal To C = %d\t Answer = %d\n\n",b,a,a,c, result);

    result = !a;
    printf("A = %d And Using Logical NOT(!) Operator on A Gives Result = %d\n\n",a, result);

    result = !b;
    printf("B = %d And Using Logical NOT (!) Operator on Gives Result = %d\n\n",b, result);

    result = !c;
    printf("C = %d And Using Logical NOt (!) operator on C Gives Result = %d\n\n",c, result);

    result = (!(a <= b) && !(b != c));
    printf("Using Logical NOT (!) on (a <= b) And Also On (b != c) And Then AND them Afterwards Gives Result = %d\n", result);

    printf("\n\n");

    result = !((b >= a) || (a == c));
    printf("using Logical NOT (!) on Entire Logical Expression (b >= a) || (a == c) Give Result = %d\n", result);

    printf("\n\n");

    return(0);
}