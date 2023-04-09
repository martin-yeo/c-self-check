#include <stdio.h>

int main(void) {
	const int PRICE_COFFEE = 4500;
	const int PRICE_SANDWICH = 6000;
	const int PRICE_COFFEE_DC = 3500;

	int numCoffee = 0;
	int numSandwich = 0;
	int totalPrice = 0;
	
	printf("*------- ī�� �ֹ� ��� -------*\n");
	
	while (1) {
		printf("Ŀ��(4,500��)�� ������ġ(6,000��)�� �Ǹ��ϰ� �ֽ��ϴ�.\n");
		printf("������ġ�� �����Ͻø� Ŀ�Ǹ� �ܴ� 3,500���� �帳�ϴ�.\n\n");

		printf("Ŀ�Ǵ� �� ���� �ֹ��Ͻðڽ��ϱ�? (0 �̻� �Է�) : ");
		int check_input = scanf_s(" %d", &numCoffee);
		if (!check_input) {
			printf("���ڸ� �Է��ϼ���!\n\n");
			char flush[256];
			scanf_s("%s", flush, (unsigned)sizeof(flush));
			continue;
		}
		else if (numCoffee < 0) {
			printf("0 ���� ū ���� �Է��ϼ���!\n\n");
			continue;
		}

		printf("������ġ�� �� ���� �ֹ��Ͻðڽ��ϱ�? (0 �̻� �Է�) : ");
		check_input = scanf_s(" %d", &numSandwich);
		if (!check_input) {
			printf("���ڸ� �Է��ϼ���!\n\n");
			char flush[256];
			scanf_s("%s", flush, (unsigned)sizeof(flush));
			continue;
		}
		else if (numSandwich < 0) {
			printf("0 ���� ū ���� �Է��ϼ���!\n\n");
			continue;
		}

		break;
	}

	if (numSandwich > 0) {
		totalPrice = numCoffee * PRICE_COFFEE_DC + numSandwich * PRICE_SANDWICH;
	}
	else {
		totalPrice = numCoffee * PRICE_COFFEE + numSandwich * PRICE_SANDWICH;
	}

	printf("�ֹ��Ͻ� Ŀ�� %d��, ������ġ %d���� ������ %d���Դϴ�\n\n",
			numCoffee, numSandwich, totalPrice);

	return 0;
}