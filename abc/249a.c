#include <stdio.h>

int get_distance(int sec, int meeter, int rest, int x)
{
	int result = 0;
	int m_per_sec = 0;
	int loop_time  = 0;

	if (x <= sec)
		result = meeter * x;
	else
	{
		loop_time = x/(sec + rest);
		result = (sec*meeter) * loop_time;
	}
	return (result);
}

int main()
{
	int *input;
	int i = 0;
	int taka = 0;
	int aoki = 0;

	*input = sizeof(int*);
	while (i < 7)
	{
		input[i] = sizeof(int);
		scanf("%d", input[i]);
		i++;
	}
	taka = get_distance(input[0], input[1], input[2], input[6]);
	aoki = get_distance(input[3], input[4], input[5], input[6]);

	if (taka == aoki)
		printf("Draw");
	else if (taka < aoki)
		printf("Aoki");
	else
		printf("Takahashi");

	return 0;
}
