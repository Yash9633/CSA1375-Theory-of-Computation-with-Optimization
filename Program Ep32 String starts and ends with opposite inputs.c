#include<stdio.h>
#include<string.h>
main(){
	int max,i;
	printf("Length: ");
	scanf("%d",&max);
	int str[max];
	for(i=0;i<max;i++){
		scanf("%d",&str[i]);
	}
	for(i=0;i<max;i++){
		printf("%d ",str[i]);
	}
	printf("\nInitial Input is %d",str[0]);
	printf("\nFinal Input is %d",str[max-1]);
	if(str[0]!=str[max-1]){
		printf("\n\n-----STRING ACCEPTED!!-----");
	}
	else{
		printf("\n\n-----INVALID STRING...-----");
	}
}
