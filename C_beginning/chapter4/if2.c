/******************************************************************************

                            4.1有條件的執行(if述句)

*******************************************************************************/

#include <stdio.h>

int main(){
    int a = 5; //if三次各別判斷一次條件
    if (a > 4){
        printf("a is larger than 4. \n");
    }
    if (a < 4){
        printf("a is smaller than 4. \n");
    }
    if (a ==4){
        printf("a is equal to 4. \n");
    }
    return 0;
}