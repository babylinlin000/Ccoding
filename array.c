/******************************************************************************

Anna array prictice 20191116
reference : https://openhome.cc/Gossip/CGossip/OneDimArray.html
version:01

*******************************************************************************/

#include <stdio.h>
#define LENGTH 10

int main(void){
    int arr[LENGTH]={9,9,9,9,9,9,9,9,9,9};
    int i;
    
    char numbers[] = {'1', '2', '3', '4', '5', '6'};
    printf("sizeof(numbers):%d\n", sizeof(numbers));
    printf("sizeof(numbers[0]):%d\n", sizeof(numbers[0]));
    printf("陣列長度:%d\n", sizeof(numbers) / sizeof(numbers[0]));
    
    int chris[2] = {100,200};
    int anna[3] = {999,10,20};
    
   // chris=anna;
    
    if(chris[0]==anna[0]){
        printf ("we are the same\n");
    }else{
        printf ("we are different\n");
    }
    
    //int scores[] = {1, 2, 3};  == int scores[3] = {1, 2, 3}; 

    
    for(i=0;i<LENGTH;i++){
        printf("%d ",arr[i]);
    }
    //putchar('\n'); == printf("\n");
    putchar('\n');
    
    for(i=0;i<LENGTH;i++){
        arr[i]= 100-i;
        //arr[0]=0;//1
        //arr[1]=1;//2
    }
    
    for(i=0;i<LENGTH;i++){
        printf("%d ",arr[i]);
    }
    
    putchar('\n');
    
    return 0;
}