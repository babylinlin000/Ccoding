/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int integer1;
    int integer2;
    int sum;
    printf("Please enter the first integer:");
    scanf("%d",&integer1);
    printf("Please enter the second integer:");
    scanf("%d",&integer2);
    sum = integer1 + integer2;
    printf("Sum is %d",sum);
    
    return 0;
}
