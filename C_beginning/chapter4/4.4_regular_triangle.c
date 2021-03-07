/******************************************************************************

                            4.4 正三角形判斷練習

*******************************************************************************/

#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Please enter the lengths:");
    scanf("%d%d%d",&side1, &side2, &side3);
    if(side1 == side2 && side2 == side3){  // && 邏輯運算式:而且 (兩邊條件需成立)
        printf("Regular triangle\n");
    }else{
        printf("Not Regular triangle.");
    }

    return 0;
}
