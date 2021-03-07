/******************************************************************************

                            5.3 對四個變數求最大值(使用if述句)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c, d, max;
    printf("Please enter the four interger: ");
    scanf("%d%d%d%d",&a, &b, &c, &d);
    max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    if(d > max){
        max = d;
    }
    printf("The maxinum is %d.\n", max);
    return 0;
}
