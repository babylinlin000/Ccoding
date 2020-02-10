#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char *argv[] = {"Anna" , "Chris"}

int main(int argc,char *argv[]){

	printf("line=[%d]\n",__LINE__);
    printf("Wendy debug argc=[%d]\n",argc);
/*
	printf("Wendy debug argv[0]=[%s]\n",argv[0]);
	printf("Wendy debug argv[1]=[%s]\n",argv[1]);
*/    
	if(argc % 2 == 0){
		printf("argc number error\n");
		return 0;
	}
	
	printf("line=[%d]\n",__LINE__);
	
	for(int i = 1; i < argc; i++)
	{ 
		char atg[100]
		char *arg = argv[i]; 
		printf("s=[%s]\n",arg);
		
		if(strcmp("-s",arg) == 0){
			printf("一個字串 %s \n",argv[i+1]);
		}else if(strcmp("-d",arg) == 0){
			printf("一個數字 %d \n",atoi(argv[i+1]));
		}
		
		//printf("line=[%d]\n",__LINE__);
		//printf("c=[%c]\n",arg[0]);
#if 0
		switch(arg[0]) { 
			case 's': 
				printf("line=[%d]\n",__LINE__);
			default: 
				printf("line=[%d]\n",__LINE__);
		} 
#endif
	}
	printf("line=[%d]\n",__LINE__);
	return 0;
}