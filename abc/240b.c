#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int tmp;
	tmp = *b;
	*b = *a;
	*a = tmp;
}

void qs(int a[], int left, int right)
{
	int pivot;
	int i, j;

	if (left >= right)
		return;

	pivot  = a[left];

	i = left;
	j = right;

	while(1)
	{
		while (a [i] < pivot)
			i++;
		while (a[j] > pivot)
			j--;

		if (i >= j)
			break;

		swap(&(a[i]), &(a[j]));
		i++;
		j--;
	}
	qs(a, left, i - 1);
	qs(a, j + 1, right);
}

int main(){
	int n;
	int *a;
	int i;
	int cnt_dig;
	int prev_dig;

	n = 0;
	i = 0;
	scanf("%d", &n);
	a = malloc(sizeof(int) * n);
	while (i< n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	qs(a, 0, n-1);
	i = 0;
	prev_dig = 0;
	cnt_dig = 0;
	while (i < n)
	{
		if (prev_dig != a[i])
		{
			prev_dig = a[i];
			cnt_dig++;
		}
		i++;
	}
	printf("%d", cnt_dig);

	return (0);
}
