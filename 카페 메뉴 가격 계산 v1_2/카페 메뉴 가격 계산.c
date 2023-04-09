#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* putComma(int numValue) {
	char* strValue = (char*)malloc(sizeof(char) * 20);
	char* commaValue = (char*)malloc(sizeof(char) * 20);
	sprintf_s(strValue, sizeof(strValue), "%d", numValue);

	int len = (int)strlen(strValue);
	if (len / 3 == 0) return strValue;

	int firstComma = len % 3;
	int count = 0;
	for (int i = 0; i < len; i++) {
		if ((i - firstComma) % 3 == 0 && i != 0) commaValue[count++] = ',';
		commaValue[count++] = strValue[i];
	}
	commaValue[count] = '\0';

	return commaValue;
}

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
		totalPrice = numCoffee * PRICE_COFFEE_DC
			+ numSandwich * PRICE_SANDWICH;
	}
	else {
		totalPrice = numCoffee * PRICE_COFFEE
			+ numSandwich * PRICE_SANDWICH;
	}

	printf("�ֹ��Ͻ� Ŀ�� %d��, ������ġ %d���� ������ %s���Դϴ�\n\n",
		numCoffee, numSandwich, putComma(totalPrice));

	return 0;
}