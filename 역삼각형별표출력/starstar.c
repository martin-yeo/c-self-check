#include <stdio.h>

int main(void) {
	printf("*----- ���ﰢ�� ��ǥ��� ���α׷� -----*\n");
	
	int numberOfFloor;
	while (1) {
		printf("�� ������ ����ұ��(1~60) : ");
		scanf_s("%d", &numberOfFloor);
		if (numberOfFloor < 1 || numberOfFloor > 60)
			printf("������ �Ѿ����ϴ�. 1��~60�� ���̸� �����մϴ�!\n");
		else
			break;
	}
	printf("*------------��°��----------------*\n");
	for (int i = 0; i < numberOfFloor; i++) {
		for (int j = numberOfFloor - i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
