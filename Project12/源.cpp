#include<stdio.h>
#include<math.h>
int main()
{
	void calculaterealroot(double A, double B, double C);
	double a, b, c;
	printf("please input a:");
	scanf("%lf", &a);
	printf("please input b:");
	scanf("%lf", &b);
	printf("please input c:");
	scanf("%lf", &c);

	calculaterealroot(a, b, c);
	return 0;
}

void calculaterealroot(double A, double B, double C)
{
	double x1, x2, delta;
	delta = B*B - 4 * A*C;
	if (delta < 0)
	{
		printf("NO REAL ROOT.\n");
	}
	else
	{
		if (delta = 0)
		{
			x1 = -B / (2 * A);
			x2 = -B / (2 * A);
			printf("x1=%lf,x2=%lf", x1, x2);
		}
		else
		{
			x1 = (-B + sqrt(delta)) / (2*A);
			x2 = (-B + sqrt(delta)) / (2*A);
			printf("x1=%lf,x2=%lf", x1, x2);
		}
	}
}