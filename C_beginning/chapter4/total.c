/******************************************************************************

                4.3 滿額折扣計算練習
                某吃到飽餐廳的套餐1人300元(無額外費用)。
                今日因周年慶特價方案，每桌消費滿3000就打八折。
                試寫一程式讓服務生輸入一桌消費人數後，輸出該桌顧客應付總額。

*******************************************************************************/

#include <stdio.h>

int main(){
    int costomer,total;
    printf("Please enter the number of customer:");
    scanf("%d",&costomer);
    total = 300 * costomer;
    if (total >= 3000){
        total = total*0.8;
    }
    printf("Total: %d \n",total);

    return 0;
}