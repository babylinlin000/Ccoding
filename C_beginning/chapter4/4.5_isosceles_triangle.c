/******************************************************************************

                            4.5 等腰三角形判斷練習

*******************************************************************************/

#include <stdio.h>

int main()
{
    int side1, side2 , side3;
    printf("Please enter the lengths:");
    scanf("%d%d%d", &side1 , &side2, &side3);
    if(side1 == side3 || side1 == side2 || side2 == side3){
        printf("Isosceles triangle\n");
    }else{
        printf("Not isosceles triangle\n");
    }
    return 0;
}
