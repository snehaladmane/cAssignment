#include <stdio.h> //'stdio.h' contains declaration of 'printf()'

// Entry-Point Function => main => Valid Return Type (int) and 3 Parameters (int argc, char *argv[], char *envp[])
int main(int argc, char *argv[], char *envp[])
{
    // function prototype / declaration / signature
    void MyAddition(void);

    //code
    MyAddition(); //function call
    return(0);

}

  // ***** USER DEFINED : METHOD OF DEFINATION 1 *****
  // ***** NO RETURN VALU, NO PARAMETRS *****

  void MyAddition(void) //function defination
  {
    //variables declaration : local variables to MyAddition()
    int a, b, sum;

    //code
    printf("\n\n");
    printf("Enter Integer Valure For 'a' : ");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter Integer Value of 'B' : ");
    scanf("%d", &b);

    sum = a + b;

    printf("\n\n");
    printf("Sum Of %d And %d = %d\n\n", a,b, sum);
    
  }
