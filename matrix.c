#include<stdio.h>
main()
{
	int array[3][3];
	int i,j;
	int *p1,*p2;
	p1=&i,p2=&j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element -[%d],[%d] :",*p1,*p2);
			scanf("%d",&array[*p1][*p2]);
		}
	}
	printf("The matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",array[*p1][*p2]);
			if(j==2)
			{
				printf("\n");
			}
		}
		
    }
    printf("\n\n");
}
