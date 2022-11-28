
#include<stdio.h>
#include<math.h>

int main()

{
	//x=15.241
	//y=7.118
	double x, y;
	scanf_s("%lf %lf", &x, &y);
	double res = (3 * sqrt(x + pow(y, 3))) / pow(y, 1.0 / 3) + 3 * cos(y)/ (4 * x);
	printf("%lf", res);
}
