#include <stdio.h>

// *** GlOBAl SCOPE ***

int main(void)
{
    // *** LOCAL SCOPE of main() begins ***
    // variable declaration
    // 'a' is a local Variable. It is Local To main() only.
    int a = 5;

    //function prototypes
    void change_count(void);

    //code
    printf("\n");
    printf("A = %d\n\n", a);

    //local_count is initialized to 0.
    //local_count = local_count + 1 = 0 + 1 = 1
    change_count();

    //Since, 'local_count' is a local static variable of change_count(), it will retain its value from previous call to change_count().
    // so local_count is 1
    // local_count = count_count + 1 = 1 + 1 = 2
    change_count();

    // Since, 'local_count' is a local static variable of change_count(), it will retain its value from previous call to change_count().
    //so local_count is 2
    //local_count = local_coount + 1 = 2 + 1 = 3
    change_count();

    return(0);

   // *** LOCAl SCOPE of main() ends ***

}

// *** GLOBAL SCOPE ***

void change_change(void)
{
    // *** LOCAL SCOPE of change_count() begins ***

    // variables declartion
    // 'local_count' is a local static variable. It is local to change_count() only.
    // It will retain its value between calls to change_count()
    static int local_count = 0;

    //code
    local_count = local_count + 1;
    printf("Local Count = %d\n", local_count);

    // *** LOCAL SCOPE of change_count() ends ***
}

