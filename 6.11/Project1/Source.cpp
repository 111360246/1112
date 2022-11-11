#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int a[9] = {10,23,3,54,89,51,41,33,77 },te;
	printf("由大到小：");
	for (int o = 0; o < 9; o++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (a[j] < a[j + 1])
			{
				te = a[j];
				a[j] = a[j + 1];
				a[j + 1] = te;
			}
			else if (a[j] >= a[j + 1])
			{
				continue;
			}
		}
	}
	
	for (int i = 0; i < 9; i++)
	{
		printf(" %d ", a[i]);
	}
	
}