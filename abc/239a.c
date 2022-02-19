#include <stdio.h>
#include <math.h>

	int main(){
	double h;
	double hor;

	h = 0;
	hor = 0;
	scanf("%lf", &h);

	hor = sqrt(h * (12800000 + h));

	printf("%lf", hor);
	return (0);
}
