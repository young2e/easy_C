#include <stdio.h>

int main(void)
{
	
	double height, width;

	printf("삼각형의 높이를 입력하세요. \n");
	scanf("%lf", &height);

	printf("삼각형의 밑변을 입력하세요. \n");
	scanf("%lf", &width);

	printf("삼각형의 넓이는 %f입니다. \n", height * width / 2);
}

// double형 데이터를 출력할 때에는 서식문자 %f를 사용하지만,
// dobule형 데이터를 입력 받을 때에는 서식문자 %lf를 사용한다.
