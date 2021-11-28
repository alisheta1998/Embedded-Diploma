/*
 * main.c
 *
 *  Created on: Nov 28, 2021
 *      Author: HELLO
 */
#include <stdio.h>
#include <string.h>

//UNIT 2 Lesson 5
//Homework 4
//Functions

#define Ex 4

#define TRUE 1
#define FALSE 0

//functions

//Exercise 1
void print_prime(int x,int y)
{
	int i=0;
	printf("Prime number in the interval [%d,%d] : ",x,y);
	for(i=x;i<y;i++)
	{
		if(check_prime(i))
		{
			printf("%d ",i);
		}
	}
}
int check_prime(int x)
{
	int i;
	if(x==0 || x==1)
	{
		printf("%d can't be prime",x);
		return FALSE;
	}
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return FALSE;
		}
	}
	return TRUE;
}

//Exercise 2
int fact_rec(int x)
{
	if(x>1)
	{
		return x*fact_rec(x-1);
	}
	else
	{
		return 1; //Default to remove warning
	}

}
//Exercise 3
void reverseSentence()
{
	char c;
	fflush(stdout);
	scanf("%c", &c);
	if (c != '\n')
	{
		reverseSentence();
		printf("%c", c);
	}
}

//Exercise 4
int power(int x,int y)
{
	if(y>=1)
	{
		return x*power(x,y-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int x,y;
	switch(Ex)
	{
	case 1 :
		printf("Prime Exercise\n");
		printf("Enter 2 numbers(intervals) : ");
		fflush(stdout);
		scanf("%d",&x);
		fflush(stdout);
		scanf("%d",&y);

		print_prime(x,y);
		break;
	case 2:
		printf("Factorial Exercise\n");
		printf("Enter a positive number : ");
		fflush(stdout);
		scanf("%d",&x);
		if(x<0)//Check for negative inputs
		{
			printf("ERROR please Enter a positive number");
			break;
		}
		printf("Factorial of %d = %d ",x,fact_rec(x));

		break;
	case 3:
		printf("Enter a sentence: ");
		reverseSentence();
		break;
	case 4:
		printf("Power Exercise\n");
		printf("Enter base number : ");
		fflush(stdout);
		scanf("%d",&x);
		printf("Enter power number : ");
		fflush(stdout);
		scanf("%d",&y);
		printf("%d^%d = %d ",x,y,power(x,y));
		break;
	default :
		printf("Enter a valid exercise number");
		break;
	}



	return 0;
}
