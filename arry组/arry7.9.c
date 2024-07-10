```
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//尝试打印数组元素
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//====================================================
//数组元素的输入
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//一维数组在内存中的存储
//#include <stdio.h>
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n ", i, &arr[i]);
//	}
//	return 0;
//}

//	sizeof计算数组的大小
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
// 
// 
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素的大小，单位是字节 
//	printf("%d\n", sz);
//	return 0;
//}
//
// 计算数组的元素个数：
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
// 表示数组中有10个元素
//	printf("%d\n 看不懂看注释", sz);
//	return 0;
//
//}
//二维数组的定位
//#include <stdio.h>
//
//int main()
//{
//    int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//    //第二行第四列
//    printf("%d\n", arr[2][4]);
//    return 0;
//}
//二维数组的输入输出
#include <stdio.h>

int main()
{
    int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
    int i = 0;//遍历行
    //输入
    for (i = 0; i < 3; i++)//产生行号
    {
        int j = 0;
        for(j=0;j<5;j++)//产生行号
        {
         scanf("%d", &arr[i][j]);//输入数据
        }
    }
//输出
for (i = 0; i < 3; i++)//产生行号
{
        int j = 0;
        for (j = 0; j < 5; j++)//产生列号
        {
            printf("%d ", arr[i][j]);//输出数据
        }
          printf("\n");
    }
    return 0;
}
```

