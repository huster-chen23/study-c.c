//��ķǳ�����Ƕӣ�������һ�����������򣬵�һ���������򣬵ڶ���ð��������ע�ͣ���������Ͱ����



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
	int tmp =arr[left];//������ߵ���Ϊ��׼
	int i = left;
	int j = right;
	
	while (i != j)//����ָ���غ�ʱ�˳�
		//������дָ����ƶ�
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
			arr[j] = t;//���ҽ���
		}
	}
		//���д��׼���������Ľ���
		arr[left] = arr[i];//ָ�������������Ȱѻ�׼��ֵ������һ��ָ��Ȼ���ٸ�ֵ��׼
		arr[i] = tmp;
		//Ȼ����еݹ��ظ�����
		
		quick_sort(arr, left,i - 1);
		quick_sort(arr, i + 1, right);

	}
int main() {

	int arr[10];
	srand((unsigned int)time(NULL));
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("������ɵ�ʮ����Ϊ��\n");
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		printf("%5d", arr[i]);//Ŀǰ�ɹ�����100�ڵ���������о�100���Ͼ��е������һ��
	}
	printf("\n");
	//���������п�������
	printf("����������˳��Ϊ��\n");
	quick_sort(arr, 0,sz-1);
	for (i = 0; i < 10; i++)
	{
		printf("%5d", arr[i]);
	}

	return 0;
}
//ð������
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
//żȻ���˽⵽Ͱ�������Ȥ��д��һ�£���ķǳ�������Ƕ�
//int main() {
//
//	int arr[10] = { 0 };
//	int count[100] = { 0 };
//	srand((unsigned int)time(NULL));
//	int i, j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������ɵ�ʮ����Ϊ��\n");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 100;
//		printf("%5d", arr[i]);//Ŀǰ�ɹ�����100�ڵ���������о�100���Ͼ��е������һ��
//		count[arr[i]]++;
//	}
//	printf("\n");
//	//��������������
//	printf("����������˳��Ϊ��\n");
//	for (i = 0; i <= 100; i++)
//	{
//		for (j = 1; j <= count[i]; j++)
//		{
//			printf("%5d", i);
//		}
//	}
//	return 0;
//}
