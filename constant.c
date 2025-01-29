#include <stdio.h>

#define MY_PI 3.1415926535897932

#define AMC_STRING "SNEHAL"

//If First Constant Is Not Assigned A Value, IT IS Assumed To Be 0 i.e: 'SUNDAY' will Be 0
// And The Rest Of The Constants Are Assigned Consecutive Integer Value From 0 onwrd i.e: 'MONDAY' Will be 1,'TUESDAY' will be 2, and so on...

// Un-named enums
enum
{
       SUNDAY,
       MONDAY,
       TUESDAY,
       WEDNESDAY,
       THURSDAY,
       FRIDAY,
       SATURDAY,

};
enum
{
     JANUARY = 1,
     FEBRUARY,
     MARCH,
     APRIL,
     MAY,
     JUNE,
     JULY,
     AUGUST,
     SEMPTEMBER,
     OCTOMBER,
     NOVEMBER,
     DECEMBER,
};
// Named enums
enum numbers
{
       ONE,
       TWO,
       THREE,
       FOUR,
       FIVE,
       SIX,
       SEVEN,
       EIGHT,
       NINE,
       TEN
};
enum boolen
{
       TRUE = 1,
       FALSE = 0
};

int main(void)
{
       //local constant declarations
       const double epsilon = 0.000001;

       //code
       printf("\n\n");
       printf("Local Constant Epsilon = %lf\n\n", epsilon);

       printf("Sunday Is Day Number = %d\n", SUNDAY);
       printf("Monday Is day Number = %d\n", MONDAY);
       printf("Tuesday is Day number = %d\n", TUESDAY);
       printf("Wednesday is Day Number = %d\n", WEDNESDAY);
       printf("Thursday is Day Number = %d\n", THURSDAY);
       printf("Friday is day number = %d\n", FRIDAY);
       printf("Saturday is day number = %d\n", SATURDAY);

       printf("one is enum number = %d\n", ONE);
       printf("Two is Enum Nnmber = %d\n", TWO);
       printf("Three is enum number  = %d\n", THREE);
       printf("Four is enum Number = %d\n", FOUR);
       printf("Five is enum number = %d\n", FIVE);
       printf("Six is enum number = %d\n", SIX);
       printf("Seven is enum number = %d\n", SEVEN);
       printf("Eight is enum Number = %d\n", EIGHT);
       printf("Nine is enum Number = %d\n", NINE );
       printf("Ten is enum Number = %d\n", TEN);

       printf("January is month number = %d\n", JANUARY);
       printf("February is month number = %d\n", FEBRUARY);
       printf("March is Month Number = %d\n", MARCH);
       printf("April is Month Number = %d\n", APRIL);
       printf("May is Month Number = %d\n", MAY);
       printf("June is Month Number = %d\n", JUNE);
       printf("July is Month Number = %d\n", JULY);
       printf("August is Month Number = %d\n", AUGUST);
       printf("September is Month Number = %d\n", SEMPTEMBER);
       printf("Octomber is Month Number = %d\n", OCTOMBER);
       printf("November is Month Number = %d\n", NOVEMBER);
       printf("December is Month Number =%d\n", DECEMBER);

       printf("Value of TRUE is = %d\n", TRUE);
       printf("Value of False is = %d\n\n", FALSE);

       printf("MY_PI Macro value = %.10lf\n\n", MY_PI);
       printf("Area of circle of Radius 2 units = %f\n\n",(MY_PI*2.0*2.0));
       //pi*r*r = area of circle of radius'r'

       print("\n\n");
       printf(AMC_STRING);
       printf("\n\n");
       printf("AMC_STRING is : %s\n", AMC_STRING);
       printf("\n\n");

       return(0);
       }
