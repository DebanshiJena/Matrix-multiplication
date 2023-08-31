#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],i,j,r1,r2,c1,c2,k,b[10][10],c[i][j],*ptr;
	int sum=0;
	printf("Enter the no. of rows and columns of the 1st matrix:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the elements of the 1st matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The 1st matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
    printf("Enter the rows and columns of the 2nd matrix:\n");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements of 2nd matrix:\n");
    for(i=0;i<r2;i++)
    {
    	for(j=0;j<c2;j++)
    	{
    		scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("The 2nd matrix is:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	if(c1!=r2)
	{
		printf("The multiplication is not possible");
	}
	else
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			sum=0;
			for(k=0;k<r1;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
	    }
	}
	printf("The multiplication of matrix a and b is :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	ptr=&c[i][j];
	free(ptr);
	return 0;
}
