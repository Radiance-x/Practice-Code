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
	printf("������������ĳɼ���");
	scanf("%d", &a);
	printf("�����������ѧ�ɼ���");
	scanf("%d", &b);
	int sum = add(a, b);
	if (sum  > 120)
	{
		printf("����ܷ�Ϊ��%d\n��ϲ����Ŀ��Գɼ��ϸ�",sum);
	}
	else
	{
		printf("����ܷ�Ϊ��%d\n��Ǹ����û��ͨ�����ԡ�", sum);
	}
	return 0;
}