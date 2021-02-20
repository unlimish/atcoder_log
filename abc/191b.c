#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	int x = 0;
	int tmp1 = scanf("%d%d", &n, &x);

	int a[n];
	char *bf;
	int tmp2 = scanf("%s", bf);

	int i = 0;
	int j = 0;
	while (*bf != '\0' && j <= n)
	{
		a[j] = atoi(bf);
		while (*bf == ' ')
			bf++;
		j++;
	}
}
