#include <stdio.h>

int main(void) {
	printf("*----- ���Ƕ�̵� ��ǥ��� ���α׷� -----*\n");

	int numberOfFloor;
	while (1) {
		printf("�� ������ ����ұ��(1~60) : ");
		scanf_s("%d", &numberOfFloor);
		if (numberOfFloor < 1 || numberOfFloor > 60)
			printf("������ �Ѿ����ϴ�. 1��~60�� ���̸� �����մϴ�!\n");
		else
			break;
	}

	printf("*-------------��°��----------------*\n");
	for (int i = 0; i < numberOfFloor; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		for (int j = (numberOfFloor - i)*2 -1; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
