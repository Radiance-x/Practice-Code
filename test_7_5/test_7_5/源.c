#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "hello world";
	char arr2[] = { 'O','M','G','!'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	int m = strlen(arr1);
	int n = strlen(arr2);
	printf("%d\n", m);
	printf("%d\n", n);
	int O = sizeof(arr2);
	printf("%d\n", O);
	{
		int a = 100;
		int g = strlen("abn\ta\328\tc");
		printf("%d\n", a);
		printf("%d\n", g);
	}
	return  0;
}
