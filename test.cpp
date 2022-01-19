#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	int arr[5] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "数组占用内存空间为：" << sizeof(arr) << endl;
//	cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
//	cout << sizeof(arr) / sizeof(arr[0]) << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "数组首地址：" << arr << endl;
//	cout << "第一个元素地址：" << &arr[0] << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 300,350,200,400,250 };
//	int max = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		//cout << arr[i] << endl;
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,3,2,5,4 };
//	int i = 0;
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (start < end)
//	{
//		int tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;;
//		start++;
//		end--;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 3,4,2,1,5 };
//	for (int i = 0; i < 5 - 1; i++)
//	{
//		for (int j = 0; j < 5 - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	cout << "二维数组所占内存:" << sizeof(arr) << endl;
//	cout << "第一行占用内存：" << sizeof(arr[0]) << endl;
//	cout << "列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//	cout << "首地址" << arr << endl;
//	system("pause");
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	int scores[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
//	string names[3] = { "zs","ls","ww" };
//	for (int i = 0; i < 3; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			sum += scores[i][j];
//			//cout << scores[i][j] << " ";
//		}
//		cout << names[i] << "总分为：" << sum << endl;
//	}
//	system("pause");
//	return 0;
//}

//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = add(a, b);
//	cout << "ret=" << ret << endl;
//	system("pause");
//	return 0;
//}


//void swap(int x, int y)
//{
//	cout << "a=" << x << "b=" << y << endl;
//	int tmp = x;
//	x = y;
//	y = tmp;
//	cout << "a=" << x << "b=" << y << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << "a=" << a << "b=" << b << endl;
//	system("pause");
//	return 0;
//}

#include"swap.h"
int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	system("pause");
	return 0;
}