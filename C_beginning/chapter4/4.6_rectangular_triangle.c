/******************************************************************************

                            4.6 直角三角形種類判斷練習

*******************************************************************************/

#include <stdio.h>

int main()
{
    int side1, side2 , side3;
    printf("Please enter the lengths:");
    scanf("%d%d%d", &side1 , &side2, &side3);
    if(side1 * side1 + side2 * side2 == side3 * side3 ||
        side1 * side1 + side3 * side3 == side2 * side2 ||
        side2 * side2 + side3 * side3 == side1 * side1){
        printf("Rectangular triangle\n");
    }else{
        printf("Not rectangular triangle\n");
    }
    return 0;
}
