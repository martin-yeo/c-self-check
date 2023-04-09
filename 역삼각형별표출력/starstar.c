#include <stdio.h>

int main(void) {
	printf("*----- 역삼각형 별표출력 프로그램 -----*\n");
	
	int numberOfFloor;
	while (1) {
		printf("몇 층으로 출력할까요(1~60) : ");
		scanf_s("%d", &numberOfFloor);
		if (numberOfFloor < 1 || numberOfFloor > 60)
			printf("범위를 넘었습니다. 1층~60층 사이만 가능합니다!\n");
		else
			break;
	}
	printf("*------------출력결과----------------*\n");
	for (int i = 0; i < numberOfFloor; i++) {
		for (int j = numberOfFloor - i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
