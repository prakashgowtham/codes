#include <stdio.h>

int main(void) {
	int input;
	scanf("%d",&input);
	if(input>0)
	{
		printf("positive");
	
	}
	else if(input<0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}
	return 0;
}

