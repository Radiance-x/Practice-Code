#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int Ŭ��ֵ = 0;
	int h = 0;

	printf("���Ƿ�ҪŬ������(1/0)��");
	scanf("%d", &h);
	if (h ==1)
	{
		while (Ŭ��ֵ < 100000)
		{
			printf("Ŭ����...����ǰŬ��ֵ��%d��\n", Ŭ��ֵ);
			Ŭ��ֵ++;
		}
		if (Ŭ��ֵ == 100000)
		{
			printf("��ϲ���������");

		}
	}
	else
	{
		printf("����2000");
	}


	return 0;
}