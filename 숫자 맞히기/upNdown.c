#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1;

	int answer = 0;
	int chance = 5;

	printf("*------- ���� ������ ���� -------*\n");
	printf("< 1~100 ������ ���ڸ� ������ ����>\n\n");
	
	while (1) {
		printf("��ſ��� ���� ��ȸ�� %dȸ �Դϴ�\n", chance--);
		printf("���ڸ� �Է��ϼ���(1~100) : ");
		int check_input = scanf_s(" %d", &answer);
		
		if (!check_input) {
			printf("���ڸ� �Է��ϼ���!\n\n");
			char flush[256];
			scanf_s("%s", flush, (unsigned) sizeof(flush));
		} 
		else if (answer < 1 || answer > 100) {
			printf("1~100 ������ ���ڸ� �Է��ϼ���!\n\n");
		}
		else if (answer > num) {
			printf("DOWN ��\n\n");
		}
		else if (answer < num) {
			printf("UP ��\n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�!! �����մϴ�!!");
			break;
		}
		else {
			printf("�˼� ���� ������ �߻��߽��ϴ�.\n\n");
		}

		if (chance == 0) {
			printf("�־��� ��ȸ�� ��� ����߽��ϴ�. ����!!\n");
			printf("��ǻ�Ͱ� ������ ���ڴ� %d�Դϴ�~~~!!\n\n", num);
			break;
		}
	}
	
	return 0;
}