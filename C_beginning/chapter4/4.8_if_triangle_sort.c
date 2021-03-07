/******************************************************************************

                            4.7 三角形種類判斷練習(使用if述句)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int side1, side2 , side3;
    printf("Please enter the lengths:");
    scanf("%d%d%d", &side1 , &side2, &side3);
    
    /* 雖然三個邊長不一定依大小順序輸入,但可透過數值交換方式,
    將輸入後的三個邊長由小到大依序存放在side1,side2,side3裡 (排序問題)*/
    
    if(side1 == side3){   //如果由小排到大輸入 side1 <= side2 <= side3
        printf("Regular triangle\n");
    }
    if(side1 == side2 || side2 == side3){
            printf("Isosceles triangle\n");
    }
    if(side1 * side1 + side2 * side2 == side3 * side3){
        printf("Rectangular triangle\n");
    }
    
    return 0;
}
