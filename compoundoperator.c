#include <stdio.h>

int main(void)
{
    //variable declarations
    int a;
    int b;
    int x;

    //code 
    printf("\n\n");
    printf("Enter A Number : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Another Nomber : ");
    scanf("%d", &b);

    printf("\n\n");

    // Since, In All The Following 5 Cases, The Operand on the Left 'a' Is getting repeated Immediatly on The Right (e.g. : a = a + b or a = a - b),
    // We are Using Co,pound Assignment Operator +=, -=, *=, /=, %=

    //Since, 'a' Will be assigned The Value Of (a + b) At The Expression ( a += b), we must save The Original Value Of 'a' To Another Variable (x)
    x = a;
    a += b; //a = a+b
    printf("Addition of A = %d And B = %d Gives %d.\n ", x,b,a);

    // Value Of 'a' Altered In The Above Expression Is Used Here....
    //Since,'a' Will Be Assigned The Value Of (a - b) At The Expression (a -= b), we must save The Origional Value of 'a' To Another Variable(x)
    x = a;
    a -= b;  //a = a - b
    printf(Substraction Of A = %d And B = %d Gives %d.\n", x,b,a);

    // Value of 'a' Altered In The Above Expression Is Used Here...
    // Since, 'a' Will be Assigned The Value of (a * b) At The Expression (a *=b ) we must save The Original Value Of 'a' To Another Variable(x)
    x = a;
    a *= b;  // a = a*b
    printf("Multiplication Of A =%d And B = %d.\n", x, b,a );

    // Value of 'a' Altered In The Above Expression Is Used Here...
    //since,'a' will Be Assigned The Value Of (a/b) At The Expression (a/=b), we Must Save The Original Value Of 'a' To Another Variable(x)
     x = a;
     a %=b; //a = a % b
     printf("Division Of A = %d And B = %d Gives Remainder %d.\n", x,b,a);

     printf("\n\n");

     return(0);
     }