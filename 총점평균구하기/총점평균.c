#include <stdio.h>
#define  MAX_SUBJECT 5

int main(void) {
	// 배열 초기화 (학생 점수 배열)
	int stdScore[MAX_SUBJECT] = { 76, 84, 80, 92, 96 };

	// 변수 초기화 (합산, 평균)
	int sumScore = 0;
	double avgScore = 0.0;
	
	// for문으로 합산하고, 평균 계산하기
	for (int i = 0; i < MAX_SUBJECT; i++)	{
		sumScore += stdScore[i];
	}

	avgScore = (double)sumScore / MAX_SUBJECT;

	// 출력
	printf("총점은 %d점, 평균은 %.1lf점입니다.\n\n", sumScore, avgScore);

	return 0;
}