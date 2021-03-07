/******************************************************************************

                            5.4 對多個變數求最小值(使用if述句)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c, d, min;
    printf("Please enter two intergers: ");
    scanf("%d%d%d%d", &a, &b, &c ,&d);
    min = a;
    if(b < min){
        min = b;
    }
    if(c < min){
        min = c;
    }
    if(d < min){
        min = d;
    }
    printf("The mininum is %d.\n", min);
    return 0;
}
