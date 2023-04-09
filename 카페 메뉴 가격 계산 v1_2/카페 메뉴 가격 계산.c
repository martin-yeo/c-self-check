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

	printf("*------- 카페 주문 계산 -------*\n");

	while (1) {
		printf("커피(4,500원)와 샌드위치(6,000원)를 판매하고 있습니다.\n");
		printf("샌드위치를 구매하시면 커피를 잔당 3,500원에 드립니다.\n\n");

		printf("커피는 몇 잔을 주문하시겠습니까? (0 이상 입력) : ");
		int check_input = scanf_s(" %d", &numCoffee);
		if (!check_input) {
			printf("숫자를 입력하세요!\n\n");
			char flush[256];
			scanf_s("%s", flush, (unsigned)sizeof(flush));
			continue;
		}
		else if (numCoffee < 0) {
			printf("0 보다 큰 수를 입력하세요!\n\n");
			continue;
		}

		printf("샌드위치는 몇 개를 주문하시겠습니까? (0 이상 입력) : ");
		check_input = scanf_s(" %d", &numSandwich);
		if (!check_input) {
			printf("숫자를 입력하세요!\n\n");
			char flush[256];
			scanf_s("%s", flush, (unsigned)sizeof(flush));
			continue;
		}
		else if (numSandwich < 0) {
			printf("0 보다 큰 수를 입력하세요!\n\n");
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

	printf("주문하신 커피 %d잔, 샌드위치 %d개의 가격은 %s원입니다\n\n",
		numCoffee, numSandwich, putComma(totalPrice));

	return 0;
}