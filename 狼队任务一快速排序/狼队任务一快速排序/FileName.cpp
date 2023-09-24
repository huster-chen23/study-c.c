//真的非常想进狼队，在任务一做了两个排序，第一个快速排序，第二个冒泡排序（已注释），第三个桶排序



#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include <stdlib.h>
void quick_sort(int *arr, int left, int right)
{
	if (left > right)
	{
		return;
	}
	int tmp =arr[left];//以最左边的数为基准
	int i = left;
	int j = right;
	
	while (i != j)//当两指针重合时退出
		//接下来写指针的移动
	{
		while (arr[j] >= tmp && j > i)
		{
			j--;
		}
		while (arr[i] <= tmp && j > i)
		{
			i++;
		}

		if (j > i)
		{
			int t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;//左右交换
		}
	}
		//最后写基准与最后的数的交换
		arr[left] = arr[i];//指针有两份所以先把基准赋值给其中一个指针然后再赋值基准
		arr[i] = tmp;
		//然后进行递归重复两侧
		
		quick_sort(arr, left,i - 1);
		quick_sort(arr, i + 1, right);

	}
int main() {

	int arr[10];
	srand((unsigned int)time(NULL));
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("随机生成的十个数为：\n");
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		printf("%5d", arr[i]);//目前成功生成100内的随机数，感觉100以上就有点大限制一下
	}
	printf("\n");
	//接下来进行快速排序
	printf("经过排序后的顺序为：\n");
	quick_sort(arr, 0,sz-1);
	for (i = 0; i < 10; i++)
	{
		printf("%5d", arr[i]);
	}

	return 0;
}
//冒泡排序
//void bouble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//
//	unsigned num = 0;
//	srand((unsigned int)time(NULL));
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 100;
//		printf("%5d", arr[i]);
//
//	}
//	bouble_sort(arr, sz);
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%5d", arr[i]);
//
//	}
//
//	return 0;
//}
//偶然间了解到桶排序感兴趣又写了一下，真的非常想进入狼队
//int main() {
//
//	int arr[10] = { 0 };
//	int count[100] = { 0 };
//	srand((unsigned int)time(NULL));
//	int i, j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("随机生成的十个数为：\n");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 100;
//		printf("%5d", arr[i]);//目前成功生成100内的随机数，感觉100以上就有点大限制一下
//		count[arr[i]]++;
//	}
//	printf("\n");
//	//接下来进行排序
//	printf("经过排序后的顺序为：\n");
//	for (i = 0; i <= 100; i++)
//	{
//		for (j = 1; j <= count[i]; j++)
//		{
//			printf("%5d", i);
//		}
//	}
//	return 0;
//}
