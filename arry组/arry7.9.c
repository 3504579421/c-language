```
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���Դ�ӡ����Ԫ��
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
//����Ԫ�ص�����
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
//һά�������ڴ��еĴ洢
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

//	sizeof��������Ĵ�С
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĴ�С����λ���ֽ� 
//	printf("%d\n", sz);
//	return 0;
//}
//
// ���������Ԫ�ظ�����
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
// ��ʾ��������10��Ԫ��
//	printf("%d\n ��������ע��", sz);
//	return 0;
//
//}
//��ά����Ķ�λ
//#include <stdio.h>
//
//int main()
//{
//    int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//    //�ڶ��е�����
//    printf("%d\n", arr[2][4]);
//    return 0;
//}
//��ά������������
#include <stdio.h>

int main()
{
    int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
    int i = 0;//������
    //����
    for (i = 0; i < 3; i++)//�����к�
    {
        int j = 0;
        for(j=0;j<5;j++)//�����к�
        {
         scanf("%d", &arr[i][j]);//��������
        }
    }
//���
for (i = 0; i < 3; i++)//�����к�
{
        int j = 0;
        for (j = 0; j < 5; j++)//�����к�
        {
            printf("%d ", arr[i][j]);//�������
        }
          printf("\n");
    }
    return 0;
}
```

