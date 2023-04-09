#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1;

	int answer = 0;
	int chance = 5;

	printf("*------- 숫자 맞히기 게임 -------*\n");
	printf("< 1~100 사이의 숫자를 맞히는 게임>\n\n");
	
	while (1) {
		printf("당신에게 남은 기회는 %d회 입니다\n", chance--);
		printf("숫자를 입력하세요(1~100) : ");
		int check_input = scanf_s(" %d", &answer);
		
		if (!check_input) {
			printf("숫자를 입력하세요!\n\n");
			char flush[256];
			scanf_s("%s", flush, (unsigned) sizeof(flush));
		} 
		else if (answer < 1 || answer > 100) {
			printf("1~100 사이의 숫자를 입력하세요!\n\n");
		}
		else if (answer > num) {
			printf("DOWN ↓\n\n");
		}
		else if (answer < num) {
			printf("UP ↑\n\n");
		}
		else if (answer == num) {
			printf("정답입니다!! 축하합니다!!");
			break;
		}
		else {
			printf("알수 없는 오류가 발생했습니다.\n\n");
		}

		if (chance == 0) {
			printf("주어진 기회를 모두 사용했습니다. 실패!!\n");
			printf("컴퓨터가 생각한 숫자는 %d입니다~~~!!\n\n", num);
			break;
		}
	}
	
	return 0;
}