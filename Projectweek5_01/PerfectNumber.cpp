#include<stdio.h>
int main()
{
	int i, j, limit, sum ;
	printf("Enter limit : ");
	scanf_s("%d", &limit);

	for (i = 1; i <= limit; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
