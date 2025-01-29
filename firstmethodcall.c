#include <stdio.h> //'stdio.h> contains declaration of 'printf()'

// ****** USER DEFINED FUNCTION : METHOD OF CALLING FUNCTION 1 *****
// ****** CALLING ALL FUNCTIONS IN main() DIRECTLY ******

//Entry-Point function => main() => Valid Return Type (int) and 3 Parameters(int argc, char *argv[], char *envp[])
int main(int argc, char *argv[], char *envp[])
{
    // function prototypes OR declarations
    void MyAddition(void);
    int MySubtraction(void);
    void MyMultiplication(int, int);
    int MyDivision(int, int);

    //variable declartions
    int result_subtraction;
    int a_multiplication, b_multiplication;
    int a_divition, b_division, result_division;

    //code

    // ***** ADDITION ******
    MyAddition(); //function call

    // ***** SUBTRACTION *****
    result_subtraction = MySutraction(); //function call
    printf("\n\n");
    printf("Subtraction Yeilds Result = %d\n", result_subtraction);

    // ***** MULTIPLICATION *****
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Multiplication ; ");
    scanf("%d", &a_multiplication);

    printf("\n\n");
    printf("Enter Integer value For 'B' For Multiplication : ");
    scanf("%d", &b_multiplication);

    MyMultiplication(a_multiplication, b_multiplication); //function call

    // ***** DIVISION ******
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Division :");
    scanf("%d", &a_division);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Division :");
    scanf("%d", &b_division);

    result_division = MyDivision(a_division, b_division); //function call
    printf("\n\n");

    printf("Division of %d and %d Gives = %(Quotient)\n", a_division, b_division, result_division);

    printf("\n\n");

    return(0);

}

// ***** Function Definition Of MyAddition() *****
void MyAddition(void) //function definition
{
    //variable declaration :  local variables to MyAddition()
    int a, b, sum;

//code
printf("Enter Integer Value For 'A' For Addition :");
scanf("%d",&a);

printf("\n\n");
printf("Enter Integer Value For 'B' For Addition : ");
scanf("%d", &b);

sum = a + b;

printf("\n\n");
printf("Sum of %d And %d = %d\n\n", a, b, sum);

}

// **** Function Definition of MySubtraction() ****
int MySubtraction(void) //function definition
{
    //variable declarations : local variables to MySubtraction()
    int a, b, substraction;

    //code
    printf("\n\n");
    printf("Enter Integer Value For 'A' For Subtraction : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' For Subtraction : ");
    scanf("%d", &b);

    substraction = a - b;
    return(subtration);

}

// *** Function Definition Of MyMultication() ****
void MyMultiplication(int a, int b) //function definition
{

    //variable declarations : local variables to MyMultiplication()
    int multiplication;

    //code
    multiplication = a * b;

    printf("\n\n");
    printf("Multiplication of %d And %d = %d/n/n", a,b, multiplication);

}

// **** Function Defination Of MyDivision() ****
int MyDivision(int a, int b) //function defination
{
    //variables declaration : local variables to MyDivision()
    int division_quotient;

    //code
    if(a > b)
    division_quotient = a/b;
    else
    division_quotient = b/a;
    
}
