#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int x;
	int *a;
	int *b;
	int i;
	int ai;
	int bi;
	int sum;

	scanf("%d %d", &n, &x);
	a = malloc(sizeof(int) * n);
	b = malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		scanf("%d %d", &a[i], &b[i]);
		i++;
	}
	ai = 0;
	sum = 0;
	while (ai < n)
	{
		bi = 0;
		sum = a[ai];
		if (ai == bi)
			bi++;
		while (bi <= n)
		{
			if (ai == bi)
				bi++;
			sum += b[bi];
			bi++;
		}
		printf("sum:%d\n", sum);
		if(sum == x)
		{
			printf("%s", "Yes");
			return (0);
		}
		ai++;
	}
	printf("%s", "No");
	return 0;
}
