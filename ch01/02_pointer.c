#include <stdio.h>


//�迭�� ������
int main() {
	int a = 10;
	int* ptr = &a;
	
	printf("%d\n", (*ptr) + 1);
	printf("%d\n", (*ptr+ 1) );
	printf("%d\n", ptr);
	printf("%d\n", ptr+1);
	printf("%d\n", ptr + 2);

	int arr[] = {1,2,3,4,5};
	for (int i=0 ; i < 5; i++) {
		printf("arr[%d]�� �ּ�: %d \n", i, &arr[i]);
	}

	//�迭�� �̸��� �迭�� 0�� ĭ�� �ּҰ��� ����.
	printf("%d\n", arr);
	printf("%d\n",&arr[0]);

	int* ptr1 = arr;

	printf("arr : %d\n", arr);
	printf("ptr1 : %d\n", ptr1);
	printf("&arr[3] : %d\n", &arr[3]);
	printf("&ptr1[3] : %d\n", &ptr1[3]);
	printf("arr+3 : %d\n", arr+3);
	printf("ptr1+3 : %d\n", ptr1+3);

	printf("arr[3] : %d\n", arr[3]);
	printf("*(arr+3) : %d\n", *(arr+3));
	printf("*(ptr1+3) : %d\n", *(ptr1+3));


	return 0;
}