#include <stdio.h>
int main()
{
	//int a, b;
	//scanf("%d%d", &a, &b);
	//printf("%d + %d = %d\n" , a,b,a+b);

	//int arr[5];
	int arr1[5] = { 1,2,3,4,5 };

	// �迭�� ���̸� ���մϴ�.
	int length = sizeof(arr1) / sizeof(arr1[0]);

	// �迭�� �� ��Ҹ� ����մϴ�.
	for (int i = 0; i < length; i++) {
		printf("%d ", arr1[i]);
	}

	int arr2[2][3] = { {1,2,3} , {4,5,6} }; //2�����迭 �ʱ�ȭ
	
	// ���� ������ ���մϴ�.
	int rows = sizeof(arr2) / sizeof(arr2[0]);
	
	// ���� ������ ���մϴ�.
	int cols = sizeof(arr2[0]) / sizeof(arr2[0][0]);


	char s[] = "hello";// s[6] �ֳĸ� ��� ���ڿ��� ������ null ���ڰ� �־����\0 �� ����.
	printf("%s �Դϴ�", s);
	int length1 = sizeof(s) / sizeof(s[0]);
	printf("%d",length1);
	

}