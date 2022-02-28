#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a;
	int i = 0;
	a = malloc(sizeof(int)*9);
	while (i <= 9)
	{
		scanf("%d", &a[i]);
		i++;
	}
	int j = 0;
	i = a[0];
	while (j < 1)
	{
		i = a[i];
		j++;
	}
		printf("%d\n", a[i]);
	free(a);
	return 0;



}
