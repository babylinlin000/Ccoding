/******************************************************************************

                            5.1 對兩個變數求最大值(使用if述句)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Please enter the first interger: ");
    scanf("%d",&a);
    printf("Please enter the second interger: ");
    scanf("%d",&b);
    max = a;         //先假設a是最大值,再以最大值和b比較
    if(max < b){
        max = b;
    }
    printf("The maxinum is %d.\n", max);
    return 0;
}
