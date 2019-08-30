#include<stdio.h>
int main()
{
	int i,j;
	float diem[5][6],sum=0;
	for (i=0;i<5;i++)
	{
	printf("\nMoi ban nhap diem cho HV %d  :",i+1);
	for (j=0;j<6;j++)
	{	
		scanf("%f",&diem[i][j]);
	}
	}	
	printf("Hoc vien |  CF  |  C   | HDJ  |  DW  | RDBMS| JAVA |  TB");
	printf("\n---------------------------------------------------------");
	for(i=0;i<5;i++)
	{
		printf("\n HV %d    |",i+1);
		for(j=0;j<6;j++)
		{
			printf(" %.1f |",diem[i][j]);
		}
		printf(" %.1f  ",sum/6);
	}
	
}
