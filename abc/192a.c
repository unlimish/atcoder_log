#include <stdio.h>

int main()
{
	int	coins = 0;
	int	coins_left = 0;
	int result = 0;
	scanf("%d", &coins);

	coins_left = coins % 100;
	if ((coins_left) != 0)
	{
		result = 100 - coins_left;
	}else{
		result = 100;
	}
	printf("%d", result);
}
