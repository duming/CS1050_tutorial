/*
author:Ming Du
	Use 1 dimensional integer arrays.
	Use functions in the implementation.
	Generate random numbers using library function rand.
	Pass arrays to function.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int check_error(int input)
{
	if(input<=100&&input>0)
		return 0;
	return 1;
}

void initialize_array(int arry[],int size)
{
	for(int i=0;i<size;i++)
		arry[i]=rand()%10;
}

void print_array(int arry[],int size)
{
	for(int i=0;i<size;i++)
		printf(" %d ",arry[i]);
	printf("\n");
}


int main()
{
	int arry[100],input;
	
	while(1)
	{
		scanf("%d",&input);
		if(check_error(input)==0)
			break;
		printf("invalid input:%d\n",input);
	}
	initialize_array(arry,input);
	print_array(arry,input);
	return 1;
}


