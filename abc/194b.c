// DOES NOT WORK

#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;

	scanf("%d", &n);
	int work_a[n - 1];
	int work_b[n - 1];
	int work_c[n - 1];

	while (n > i)
	{
		scanf("%d %d", &work_a[i], &work_b[i]);
		work_c[i] = work_a[i] + work_b[i];
		i++;
	}

	int min_a = 10*5 + 1;
	int min_b = 10*5 + 1;
	int min_c = 10*5 + 1;
	int a, b, c;
	i = 0;
	while (i < n)
	{
		if (min_a > work_a[i])
		{
			min_a = work_a[i];
			a = i;
		}
		if (min_b > work_b[i])
		{
			min_b = work_b[i];
			b = i;
		}
		if (min_c > work_c[i])
		{
			min_c = work_c[i];
			c = i;
		}
		i++;
	}
	if (min_c > (min_a + min_b))
		printf("%d\n", min_c);
	else if (min_a >= min_b)
		printf("%d\n", min_b);
	else
		printf("%d\n", min_a);
	return (0);
}
