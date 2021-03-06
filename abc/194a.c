#include <stdio.h>

// 乳固形分が>=15、乳脂肪分>=8%アイスクリーム : 1
// 乳固形分>=10%、乳脂肪分>=3%アイスミルクに当てはまる場合 : 2
// 上のいずれにも当てはまらず、乳固形分が 3 パーセント以上ラクトアイスに当てはまる場合 : 3
// スヌケアイスが氷菓に当てはまる場合 : 4

int main()
{
	int milk_solid = 0;
	int milk_fat = 0;
	int	sum_fat = 0;
	scanf("%d %d", &milk_solid, &milk_fat);
	sum_fat = milk_fat + milk_solid;
	if (sum_fat >= 15 && milk_fat >= 8)
		printf("%d\n", 1);
	else if (sum_fat >= 10 && milk_fat >= 3)
		printf("%d\n", 2);
	else if (sum_fat >= 3)
		printf("%d\n", 3);
	else
		printf("%d\n", 4);
	return (0);
}
