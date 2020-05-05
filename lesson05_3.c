#include <stdio.h>

int main(void)
{
	int num;

	printf("0부터 10까지의 정수를 입력하시오. \n");
	scanf("%d", &num);

	if(num >= 0 && num <= 10)
	{
		printf("정답입니다. \n");
	}
	else
	{
		printf("틀렸습니다. \n");
	}
	
	return 0;
}
