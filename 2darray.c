#include<stdio.h>
int main()
{
	int arr[2][3],i,j;
	printf("Enter the elements of the array\n");
	for(i=0;j<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n The elements of the matrix are\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
return 0;

}
