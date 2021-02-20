#include <stdio.h>

int main()
{
	char str[1000];
	int i = 0;

	scanf("%s", str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <='Z') && i % 2 != 0 )
		{
			i++;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') && i % 2 == 0)
		{
			i++;
		}
		else
			break;
	}
	if (str[i] == '\0')
		printf("Yes\n");
	else
		printf ("No\n");
	return (0);
}
