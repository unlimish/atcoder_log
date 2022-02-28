#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m;
	int *a;
	int *b;

	scanf("%d %d", &n, &m);
	a = malloc(sizeof(int) * n);
	b = malloc(sizeof(int) * m);
	int i = 0;
	while(i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	i = 0;
	while (i < m)
	{
		scanf("%d", &b[i]);
		i++;
	}
	i = 0;
	int j = 0;
	while (i < m)
	{
		j = 0;
		while (j < n)
		{
			if (a[j] == b[i])
			{
				a[j] = 0;
				break;
			}
			j++;
		}
		if (j == n)
		{
			printf("No");
			return 0;
		}
		i++;
	}
	printf("Yes");
	return 0;


}
