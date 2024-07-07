#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int add(int x, int y)
{
	int z = x + y;

	return z;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入你的语文成绩：");
	scanf("%d", &a);
	printf("请输入你的数学成绩：");
	scanf("%d", &b);
	int sum = add(a, b);
	if (sum  > 120)
	{
		printf("你的总分为：%d\n恭喜！你的考试成绩合格！",sum);
	}
	else
	{
		printf("你的总分为：%d\n抱歉，你没有通过考试。", sum);
	}
	return 0;
}