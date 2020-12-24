#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i_input;
	printf("请输入你要计算的数字：\n");
	scanf("%d", &i_input);

	int ret = 0;//存放每个数字的阶乘
	int sum = 0;//存放总阶乘之和

	for (int i=1;i<=i_input;i++)
	{
		ret = 1;
		for (int j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("请输入你要计算的数字的阶乘是%d：\n", sum);
	//1+1*2+1*2*3+1*2*3*4
	//1+2+2*3+2*3*4+2*3*4*5
	printf("请输入你要计算的数字：\n");
	scanf("%d", &i_input);

	 ret = 1;//存放每个数字的阶乘
	 sum = 0;//存放总阶乘之和

	for (int i = 1; i <= i_input; i++)
	{
		
		
			ret *= i;//每个数的阶乘
		
		sum += ret;
	}
	printf("请输入你要计算的数字的阶乘是%d：\n", sum);
	return 0;
}