#include<stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: (0) is always success
 */ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	if(n>0){
		printf("is positive\n");
	}
	else if(n==0){
		printf("is zero\n");
	}
	else{
		printf("is negative\n");
	}
	return (0);
}