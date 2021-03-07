/******************************************************************************

                            4.7 三角形種類判斷練習(使用if述句)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int side1, side2 , side3;
    printf("Please enter the lengths:");
    scanf("%d%d%d", &side1 , &side2, &side3);
    if(side1 == side2 && side2 == side3){   //三個if的順序是有關係的
        printf("Regular triangle\n");
    }
    if(side1 == side2 || side1 == side3 || side2 == side3){
            printf("Isosceles triangle\n");
    }
    if(side1 * side1 + side2 * side2 == side3 * side3 ||
        side1 * side1 + side3 * side3 == side2 * side2 ||
        side2 * side2 + side3 * side3 == side1 * side1){
        printf("Rectangular triangle\n");
    }
    
    return 0;
}
