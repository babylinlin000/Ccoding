/******************************************************************************

                            5.5 對三個變數求中位數

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c, median;
    printf("Please enter three intergers: ");
    scanf("%d%d%d", &a, &b, &c);
    median = a;                                 //跟求最大值有何不同? 複雜度的概念
    if(a <= b && b <= c || c <= b && b <= a){
        median = b;
    }
    if(a <= c && c <= b || b <= c && c <= a){
        median = c;
    }
    printf("The median is %d.\n", median);
    return 0;
}
