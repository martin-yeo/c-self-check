#include <stdio.h>
#define  MAX_SUBJECT 5

int main(void) {
	// �迭 �ʱ�ȭ (�л� ���� �迭)
	int stdScore[MAX_SUBJECT] = { 76, 84, 80, 92, 96 };

	// ���� �ʱ�ȭ (�ջ�, ���)
	int sumScore = 0;
	double avgScore = 0.0;
	
	// for������ �ջ��ϰ�, ��� ����ϱ�
	for (int i = 0; i < MAX_SUBJECT; i++)	{
		sumScore += stdScore[i];
	}

	avgScore = (double)sumScore / MAX_SUBJECT;

	// ���
	printf("������ %d��, ����� %.1lf���Դϴ�.\n\n", sumScore, avgScore);

	return 0;
}