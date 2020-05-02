#include <stdio.h>

int main(void)
{
	int height, weight;
	printf("키를 입력하세요. \n");
	scanf("%lf", &height);
	
	printf("몸무게를 입력하세요. \n");
	scanf("%lf", &weight);

	printf("키는 %f cm입니다. \n", height);
	printf("키는 %f kg입니다. \n", weight);

	return 0;
}
