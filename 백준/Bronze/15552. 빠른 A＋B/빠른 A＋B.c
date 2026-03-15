#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;		// 테스트케이스 갯수
	int A, B;

	scanf("%d", &n);

	if (n > 1000000) {
		printf("갯수 제한은 총 1000000개");
		return 1;
	}

	int* result = (int*)malloc(sizeof(int)* n);
	if (result == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &A, &B); 
		if ((A < 1 || A > 1000) && (B < 1 || B > 1000)) {
			printf("1부터 1000사이의 숫자만 입력");
			return 1;
		}
		else 
			result[i] = A + B;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", result[i]);
	}
	
	free(result);
	
	return 0;
}
