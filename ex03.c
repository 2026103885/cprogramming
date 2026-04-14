#include <stdio.h>
int main()
{
	int korean, english, math;
	int tot;
	double avg;

	printf("국어 영어 수학점수를 순서대로 입력: ");
	
	scanf("%d %d %d",&korean,&english &math);


	tot = (korean + english + math);
	avg = (double)tot / 과목수;

	printf("총점= %d 평균=%f\n",tot, avg);
	return 0;
}

