/*
 ============================================================================
 Name        : challenge.c
 Author      : Ahmed farag
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program that reads a positive integer and
checks if it is a perfect square.WITHOUT USING (SQRT FUNC.)
 ============================================================================
 */
#include <stdio.h>
//function to pass variable by value
int sqr(int num_1){
int psqrt;
//loop to get the roots of number
for (int i=1;i<num_1;i++){
psqrt=i*i;
if(num_1==psqrt){
printf("num roots %d %d \n",i,i);
printf("num perfect sqr \n");
break;
}
}
return psqrt;
}
int main()
{
	int x;
	int num_in;
	fprintf(stdout,"Please enter the no.\n");
	fflush(stdout);
	// reads inputs num from user
	scanf("%d",&x);

	num_in=x;
	//check if num is +ve or not
	if (num_in>0){
		//if num is +ve check if is it perfect sqr or not
		if(sqr(num_in) != num_in){
			printf("num not perfect sqr \n");
		}
	}
	else{
		printf("not even +ve \n");
	}
	return 0;
}




