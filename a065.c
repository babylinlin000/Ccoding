//a065
#include <stdio.h>

int main()
{
  char string[20];
  int num;
  
  while(scanf("%s",string) != EOF)
  {
    for(num=0;num<6;num++)
    {
      int ans=string[num+1]-string[num];
      
      if(ans < 0)
      {
        ans *= -1;
      }

      printf("%d",ans);
    }
    //printf("%d \n",ans);
  printf("\n");

  }
  return 0;
}
