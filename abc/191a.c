#include <stdio.h>

int main()
{
	int v = 0;
	int t = 0;
	int s = 0;
	int d = 0;

	// t < s
	int input = scanf("%d%d%d%d", &v, &t, &s, &d);
	int stt = v * t;
	int end = v * s;

	if (d >= stt && d <= end)
		printf("%s", "No");
	else
		printf("%s", "Yes");
}
