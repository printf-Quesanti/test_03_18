#include<stdio.h>
int main()
{
	int g = 0, m = 0, x = 0;
	int n = 0; int t = 0;
	scanf_s("%d\n", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if ((n - i - j) % 3 == 0)
			{
				if ((n - i - j) / 3 + 5 * i + 3 * j == n)
				{
					printf("%4d%4d%4d\n", i, j, (n - i - j));
					t = 1;
				}
			}
		}
	}
	if (t == 0)
	{
		printf("No Answer");
	}
	return 0;
}