/*
 * main.c
 *
 *  Created on: Nov 18, 2021
 *      Author: Ali Sheta
 */


#include "stdio.h"

//UNIT 2 Lesson 3 C basics
//Homework 1

#define Ex 7

void hello(void)
{
	printf("THIS IS THE HELLO WORLD FUNCTION !!\n");
}

int main()
{
	int x,y,z,temp;
	float f1,f2;
	char c;
	//hello();
	switch(Ex)
	{
	case 1:
		//Ex 1
		printf("C Programming \n");
		break;
	case 2:
		//Ex 2
		printf("Enter a number : ");
		fflush(stdout);
		scanf("%d",&x);
		fflush(stdout);
		printf("You entered : %d",x);
		break;
	case 3:
		//Ex 3
		printf("Enter two integers : ");
		fflush(stdout);
		scanf("%d",&x);
		fflush(stdout);
		scanf("%d",&y);
		printf("%d + %d = %d",x,y,x+y);
		break;
	case 4:
		//Ex 4
		printf("Enter two floats : ");
		fflush(stdout);
		scanf("%f",&f1);
		fflush(stdout);
		scanf("%f",&f2);
		printf("%f * %f = %f",f1,f2,f1*f2);
		break;
	case 5:
		printf("Enter a letter : ");
		fflush(stdout);
		scanf("%c",&c);
		printf("ASCII Code of %c is %d",c,c);
		break;
	case 6:
		//Ex 6
		printf("Enter number x : ");
		fflush(stdout);
		scanf("%d",&x);
		printf("Enter number y : ");
		fflush(stdout);
		scanf("%d",&y);
		temp = x;
		x=y;
		y=temp;
		printf("After Swapping : x=%d , y= %d",x,y);
		break;
	case 7 :
		//Ex 6
		printf("Enter number x : ");
		fflush(stdout);
		scanf("%d",&x);
		printf("Enter number y : ");
		fflush(stdout);
		scanf("%d",&y);
		x=x+y;
		y=x-y;
		x=x-y;
		//IT can also be done using XOR
		/*
		 * x = x^y;
		 * y = x^y;
		 * x = x^y;
		 *
		 * */
		printf("After Swapping : x=%d , y= %d",x,y);
		break;
	default:
		printf("Please Enter a valid Example number\n");
		break;
	}

	return 0;
}
