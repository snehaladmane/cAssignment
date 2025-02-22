#include <stdio.h> //'stdio.h' contains of 'printf()'

//Entry-Point Function => main() => valid Return Type (int) and 3 Parameters (int argc, char *argc[], char *envp[])
int main(int argc, char *argv[], char *envp[])
{
    //function prototype / declaration / signature
    int MyAddition(void);

    //variable declaration : local variables to main()
    int result;

    //code
    result = MyAddition();  //function call

    printf("\n\n");
    printf("Sum = %d\n\n", result);
    return(0);

}

// ***** USER DEFINED FUNCTION : METHOD OF DEFINATION 2 ****
// ***** VALID (int) RETURN VALUE, NO PARAMETERS *****

int MyAddition(void)  // function defination
{
    //variable declarations : local variables to MyAddition()
    int a,b, sum;

    //code
    printf("\n\n");
    printf("Enter Integer Value For 'A' : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value For 'B' : ");
    scanf("%d", &b);

    sum = a + b;

    return(sum);

}