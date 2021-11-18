/*
 * main.c
 *
 *  Created on: Nov 18, 2021
 *      Author: HELLO
 */
#include <stdio.h>

#define Ex 8

int main()
{
	int x,y,z,largest,i,sum=0,factorial=1;
	char c;
	float fl,f1,f2;

	switch(Ex)
	{
	case 1 :
		printf("Enter an integer : ");
		fflush(stdout);
		scanf("%d",&x);
		if(x%2==0)
		{
			printf("%d is an even number",x);
		}
		else
		{
			printf("%d is an odd number",x);
		}
		break;
	case 2:
		printf("Enter a letter : ");
		fflush(stdout);
		scanf("%c",&c);
		switch(c)
		{
		case 'a':
		case 'A':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		case 'i':
		case 'I':
		case 'e':
		case 'E':
			printf("%c is a vowel",c);
			break;
		default :
			printf("%c is a consonent",c);
			break;
		}
		break;
	case 3 :
		printf("Enter 3 integers : ");
		fflush(stdout);
		scanf("%d",&x);
		fflush(stdout);
		scanf("%d",&y);
		fflush(stdout);
		scanf("%d",&z);
		largest =x;
		if(x>y && x>z)
		{
			largest =x;
		}
		else if (y>x && y>z)
		{
			largest =y;
		}
		else
		{
			largest =z;
		}
		printf("Largest Number is : %d",largest);
		break;
	case 4:
		printf("Enter a number : ");
		fflush(stdout);
		scanf("%f",&fl);
		fflush(stdout);
		if(fl>0.0)
		{
			printf("%f is a positive number",fl);
		}
		else if(fl<0.0)
		{
			printf("%f is a negative number",fl);
		}
		else
		{
			printf("%f is ZERO",fl);
		}
		break;
	case 5:
		printf("Enter a character : ");
		fflush(stdout);
		scanf("%c",&c);
		if(c>=65 && c<=122)
		{
			printf("%c is an Alphabet",c);
		}
		else
		{
			printf("%c is not and Alphabet",c);
		}
		break;
	case 6:
		printf("Enter a number : ");
		fflush(stdout);
		scanf("%d",&x);
		for(i=0;i<x;i++)
		{
			sum +=i;
		}
		printf("The sum of natural numbers from 0 to %d = %d",x,sum);
		//it can also be calculated in one step : sum = (n(n-1))/2
		break;
	case 7:
		printf("Enter a number : ");
		fflush(stdout);
		scanf("%d",&x);
		if(x<0)
		{
			printf("ERROR : Factorial of Negative numbers doesn't exist.");
			break;
		}
		for(i=1;i<=x;i++)
		{
			factorial *=i;
		}
		printf("The factorial of %d = %d",x,factorial);
		break;
	case 8:
		printf("Enter an operator : ");
		fflush(stdout);
		scanf("%c",&c);
		switch(c)
		{
		case '+':
			printf("Enter 2 operands : ");
			fflush(stdout);
			scanf("%f",&f1);
			fflush(stdout);
			scanf("%f",&f2);
			printf("%f + %f = %f",f1,f2,f1+f2);
			break;
		case '-':
			printf("Enter 2 operands : ");
			fflush(stdout);
			scanf("%f",&f1);
			fflush(stdout);
			scanf("%f",&f2);
			printf("%f - %f = %f",f1,f2,f1-f2);
			break;
		case '*':
			printf("Enter 2 operands : ");
			fflush(stdout);
			scanf("%f",&f1);
			fflush(stdout);
			scanf("%f",&f2);
			printf("%f * %f = %f",f1,f2,f1*f2);
			break;
		case '/':
			printf("Enter 2 operands : ");
			fflush(stdout);
			scanf("%f",&f1);
			fflush(stdout);
			scanf("%f",&f2);
			if(f2==0.0)
			{
				printf("ERROR : The second operand can't be ZERO ");
				break;
			}
			printf("%f / %f = %f",f1,f2,f1/f2);
			break;
		default:
			printf("Invalid operator Selected");
			break;
		}
		break;
	default :
		printf("Enter a valid exercise number");
		break;
	}



	return 0;
}
