#include <stdio.h>

int main()
{
	int n = 0;
	int result = 0;
	scanf("%d",&n);
	int a[n-1];

	int i = 0;
	while (n > i)
	{
		scanf("%d", &a[i]);
		i++;
	}

	int j = 1;
	i = 0;
	while (n/2 > i)
	{
		printf("%d - %d\n", a[i+1], a[i]);
		int pow = (a[i] - a[j]);
		result += pow * pow;
		j++;
		if (j == n -1 )
		{
			i++;
			j = i + 1;
		}
	}
	printf("%d\n", result);
	return (0);
}
