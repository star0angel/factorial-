#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i_input;
	printf("��������Ҫ��������֣�\n");
	scanf("%d", &i_input);

	int ret = 0;//���ÿ�����ֵĽ׳�
	int sum = 0;//����ܽ׳�֮��

	for (int i=1;i<=i_input;i++)
	{
		ret = 1;
		for (int j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("��������Ҫ��������ֵĽ׳���%d��\n", sum);
	//1+1*2+1*2*3+1*2*3*4
	//1+2+2*3+2*3*4+2*3*4*5
	printf("��������Ҫ��������֣�\n");
	scanf("%d", &i_input);

	 ret = 1;//���ÿ�����ֵĽ׳�
	 sum = 0;//����ܽ׳�֮��

	for (int i = 1; i <= i_input; i++)
	{
		
		
			ret *= i;//ÿ�����Ľ׳�
		
		sum += ret;
	}
	printf("��������Ҫ��������ֵĽ׳���%d��\n", sum);
	return 0;
}