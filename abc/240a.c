#include <stdio.h>

int main(){
	int	a;
	int b;
	int abs;

	a = 0;
	b = 0;
	abs = 0;


	scanf("%d %d", &a, &b);
	abs = a-b;
	if (abs < 0)
		abs *= -1;
	if ((abs == 1) || (abs == 9))
		printf("%s", "Yes");
	else
		printf("%s", "No");
	return (0);
}
