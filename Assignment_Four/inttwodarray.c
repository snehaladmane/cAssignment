#include <stdio.h>
int main(void)
{
    int iArray[5][3] = {{1, 2, 3}, {2, 4, 6}, {3, 6 , 9}, {4, 8, 12}, {5, 10, 15}};
    //IN-LINE INITIALIZATION
    int int_size;
    int iArray_size;
    int iArray_num_elements, iArray_num_rows, iArray_num_columns;

    printf("\n\n");

    int_size = sizeof(int);

    iArray_size = sizeof(iArray);
    printf("Size Of Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_size);

    iArray_num_rows = iArray_size / sizeof(iArray[0]);
    printf("Number of Rows In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_rows);

    iArray_num_columns = sizeof(iArray[0]) / int_size;
    printf("Number of columns In Two Dimensional ( 2D ) Integer Array Is = %d\n\n", iArray_num_columns);

    iArray_num_elements = iArray_num_rows * iArray_num_columns;
    printf("Number of Elements In Two Dimensional ( 2D ) Integer Array Is = %d\n\n ", iArray_num_elements);

    printf("\n\n");
    printf("Element In The 2D Array : \n\n");

    // *** ARRAY INDICES BEGIN FROM 0, HENCE, 1ST ROW IS ACTUALLY 0TH ROW AND 1ST COLUMN IS ACTUALLY 0TH COLUMN  
}