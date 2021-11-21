/*
 * main.c
 *
 *  Created on: Nov 20, 2021
 *      Author: HELLO
 */
#include <stdio.h>
#include <string.h>

//UNIT 2 Lesson 4
//Homework 3
//Strings

#define Ex 3

int main()
{
	char str[30],c,rev_str[30];
	int count=0,i=0,len;
	switch(Ex)
	{
	case 1 ://Ex 1
		printf("Enter a string : ");
		fflush(stdout);
		gets(str);
		printf("Enter a character to find count : ");
		fflush(stdout);
		scanf("%c",&c);
		while(str[i]!=0)
		{
			if(str[i]==c)
			{
				count++;
			}
			i++;
		}
		printf("Count of %c is %d",c,count);
		break;
	case 2:
		printf("Enter a string : ");
		fflush(stdout);
		gets(str);
		while(str[i]!=0)
		{
			i++;
		}
		printf("Length of string = %d",i);
		break;
	case 3:
		printf("Enter a string : ");
		fflush(stdout);
		gets(str);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			rev_str[i]=str[len-i-1];
		}
		printf("The reversed string : %s",rev_str);
		break;
	default :
		printf("Enter a valid exercise number");
		break;
	}



	return 0;
}
