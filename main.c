/**
 ******************************************************************************
 * @file           : task 6
 * @author         : ola ahmed
 * @brief          : pointers
 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ********************** Global Variables Section Start ************** */
    unsigned int number_one;
    unsigned int number_two;
    unsigned int dev;
    signed int div_return;
/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Declaration Section Start ************ */

/* ********************** Global Declaration  Section End   *********** */

/* ********************** Sub-Program Declarations Section Start ****** *///functions
    int divide(int num1, int num2, int *result);
/* ********************** Sub-Program Declarations Section End ******** */

/* ********************** Sub-Program Section Start ******************* */
   int main()
{
    printf("Enter number one: ");
    scanf("%i", &number_one);
    printf("\n Enter number two: ");
    scanf("%i", &number_two);
    div_return=divide(number_one,number_two,&dev);
    printf("the return= %i",div_return);
    return 0;
}
/* ********************** Sub-Program Section End ******************** */

/* ********************** Sub-Program definition Section Start ******* */
    int divide(int num1, int num2, int *result)
    {
    signed int out=0;
    if(0==num2)
    {
        out=1;
    }
    else
    {
        *result=num1/num2;
        printf("the result is %i",dev);
        out=-1;
    }
    return out ;
    }
/* ********************** Sub-Program definitions Section End ******** */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      15 feb 2024           num1
*/
