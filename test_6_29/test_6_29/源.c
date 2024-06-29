//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	int w = 0;
//	int sum = 0;
//	scanf("%d %d", &t, &w);
//	sum = t + w;
//	printf("sum =%d", sum);
//	return 0;
//}

//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	scanf("%f %f", &a, &b);
//	c = a + b;
//    printf("a+b=%f\n", c);
//	return 0;
//}

#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double x = 0;
	double y = 0;
	double z = 0;
	double sum = 0;

	scanf("%lf %lf %lf", &x, &y, &z);
	sum = x + y + z;
	printf("三个数之和=%lf", sum);

	return 0;
}