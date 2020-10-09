//利用二分查找法（在顺序数组中找到一个数）（法二）

#include<stdio.h>
//#include<math.h>
int main()
{
	int arr[] = {1, 2 ,3 ,4 ,6, 7 ,8 ,9, 10 ,11};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
	int left = 0;//左下标
	int right = sz-1;//右下标
	
	
	while (left<=right)//当left<=right时满足循环条件//无循环调整
	{
		int mid = (left + right) / 2;//中间标（取整）
		if (k < arr[mid])
		{
			right -= 1;
		}
		else if (k > arr[mid])
		{
			left += 1;
		}
		else
		{
			printf("已经找到这个数的小标为：%d\n", mid);
			break;//找到那个数即可跳出循环
		}
	}
	if(left >right)
		printf("这个数不存在数组中\n");
	return 0;
}