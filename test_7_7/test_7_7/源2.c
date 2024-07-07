#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int 努力值 = 0;
	int h = 0;

	printf("你是否要努力工作(1/0)：");
	scanf("%d", &h);
	if (h ==1)
	{
		while (努力值 < 100000)
		{
			printf("努力中...（当前努力值：%d）\n", 努力值);
			努力值++;
		}
		if (努力值 == 100000)
		{
			printf("恭喜！年入百万！");

		}
	}
	else
	{
		printf("月入2000");
	}


	return 0;
}