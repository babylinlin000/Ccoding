/******************************************************************************

                            5.2 對三個變數求最大值(使用if述句)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Please enter the three interger: ");
    scanf("%d%d%d",&a, &b, &c);
    max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    printf("The maxinum is %d.\n", max);
    return 0;
}
