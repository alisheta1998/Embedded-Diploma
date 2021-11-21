/*
 * main.c
 *
 *  Created on: Nov 20, 2021
 *      Author: HELLO
 */
#include <stdio.h>

//UNIT 2 Lesson 4
//Homework 3
//Arrays

#define Ex 5

int main()
{
	int a[2][2] , b[2][2],sum[2][2];
	int i,j,n;
	float average,s=0,float_arr[20];
	int r,c;//Rows and coloumns of a matrix
	int trans[20][20],mat[20][20];
	int int_arr[20],insert, insert_index;
	int search;

	switch(Ex)
	{
	case 1 ://Ex 1
		printf("Enter the elements of the first matrix : \n");
		printf("a00=");
		fflush(stdout);
		scanf("%d",&a[0][0]);
		printf("a01=");
		fflush(stdout);
		scanf("%d",&a[0][1]);
		printf("a10=");
		fflush(stdout);
		scanf("%d",&a[1][0]);
		printf("a11=");
		fflush(stdout);
		scanf("%d",&a[1][1]);

		printf("Enter the elements of the Second matrix : \n");
		printf("b00=");
		fflush(stdout);
		scanf("%d",&b[0][0]);
		printf("b01=");
		fflush(stdout);
		scanf("%d",&b[0][1]);
		printf("b10=");
		fflush(stdout);
		scanf("%d",&b[1][0]);
		printf("b11=");
		fflush(stdout);
		scanf("%d",&b[1][1]);

		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				sum[i][j]= a[i][j]+b[i][j];
			}
		}
		printf("The sum array : \n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d  ",sum[i][j]);
			}
			printf("\n");
		}
		break;
	case 2:
		printf("Enter the number of data : ");
		fflush(stdout);
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("%d. Enter the Number : ",i+1);
			fflush(stdout);
			scanf("%f",&float_arr[i]);
			s+=float_arr[i];
		}
		average=s/n;
		printf("Average : %f",average);
		break;
	case 3 :
		printf("Enter the rows and coloums of the matrix : ");
		fflush(stdout);
		scanf("%d",&r);
		fflush(stdout);
		scanf("%d",&c);

		printf("Enter the elements of the matrix : \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("Element[%d][%d] = ",i,j);
				fflush(stdout);
				scanf("%d",&mat[i][j]);
			}
		}
		printf("Entered matrix : \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d  ",mat[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				trans[i][j]=mat[j][i];
			}
		}
		printf("Transposed matrix : \n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{
				printf("%d  ",trans[i][j]);
			}
			printf("\n");
		}
		break;
	case 4:
		printf("Enter the number of elements : ");
		fflush(stdout);
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			fflush(stdout);
			scanf("%d",&int_arr[i]);
		}
		printf("Old Array : ");
		for(i=0;i<n;i++)
		{
			printf("%d ",int_arr[i]);
		}
		printf("\n");
		printf("Enter the value to insert : ");
		fflush(stdout);
		scanf("%d",&insert);
		printf("Enter the index to input : ");
		fflush(stdout);
		scanf("%d",&insert_index);
		//Shifting all the array by 1
		for(i=n;i>insert_index-1;i--)
		{
			int_arr[i]= int_arr[i-1];
		}
		int_arr[insert_index-1]=insert;
		printf("New Array : ");
		for(i=0;i<n+1;i++)
		{
			printf("%d ",int_arr[i]);
		}

		break;
	case 5:
		printf("Enter the number of elements : ");
		fflush(stdout);
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			fflush(stdout);
			scanf("%d",&int_arr[i]);
		}
		printf("Array : ");
		for(i=0;i<n;i++)
		{
			printf("%d ",int_arr[i]);
		}
		printf("\n");
		printf("Enter the value to search for : ");
		fflush(stdout);
		scanf("%d",&search);
		for(i=0;i<n;i++)
		{
			if(int_arr[i]==search)
			{
				printf("Number %d is found on index : %d",search,i);
				break;
			}
			if(i==n-1 && int_arr[i]!=search)
			{
				printf("Number %d was not found",search);
			}
		}

		break;
	default :
		printf("Enter a valid exercise number");
		break;
	}



	return 0;
}
