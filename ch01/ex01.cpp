#include <stdio.h>
int main()
{
	//int a, b;
	//scanf("%d%d", &a, &b);
	//printf("%d + %d = %d\n" , a,b,a+b);

	//int arr[5];
	int arr1[5] = { 1,2,3,4,5 };

	// 배열의 길이를 구합니다.
	int length = sizeof(arr1) / sizeof(arr1[0]);

	// 배열의 각 요소를 출력합니다.
	for (int i = 0; i < length; i++) {
		printf("%d ", arr1[i]);
	}

	int arr2[2][3] = { {1,2,3} , {4,5,6} }; //2차원배열 초기화
	
	// 행의 개수를 구합니다.
	int rows = sizeof(arr2) / sizeof(arr2[0]);
	
	// 열의 개수를 구합니다.
	int cols = sizeof(arr2[0]) / sizeof(arr2[0][0]);


	char s[] = "hello";// s[6] 왜냐면 모든 문자열의 끝에는 null 문자가 있어야함\0 이 존재.
	printf("%s 입니다", s);
	int length1 = sizeof(s) / sizeof(s[0]);
	printf("%d",length1);
	

}