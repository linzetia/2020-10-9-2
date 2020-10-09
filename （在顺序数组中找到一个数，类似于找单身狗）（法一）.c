//（在顺序数组中找到一个数，类似于找单身狗）（法一）//此方法得重复n次，效率太低，可以二分法查找

#include<stdio.h>
int main()	
{	
	int arr[] = { 1, 2 ,3 ,4 ,6, 7 ,8 ,9, 11 ,12 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("已经找到这个数的小标为：%d\n", i);
			break;
		}
	}
	if(i==sz)//全部都找了，这时sz=10
		printf("这个数不存在数组中\n");
	return 0;
}
