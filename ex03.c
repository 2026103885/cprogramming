#include <stdio.h>
int main()
{
	int korean, english, math;
	int tot;
	double avg;

	printf("국어 점수 입력: ");
	scanf("%d, &korean");

	printf("영어 점수 입력: ");
	scanf("%d, &english");

	printf("수학 점수 입력: ");
	scanf("%d &math");


	tot = (korean + english + math);
	avg = tot / 3;
	printf("평균은 %.21f 입니다. \n, avg");
	return 0;
}

