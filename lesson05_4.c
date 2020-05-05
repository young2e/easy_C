#include <stdio.h>

int main(void)
{
	char alphabet;

	printf("A~C까지의 문자를 입력하세요. \n");
	alphabet = getchar();

	if(alphabet == 'A' || alphabet == 'B' || alphabet =='C')
	{
		printf("정답입니다. \n");
	}
	else
	{
		printf("틀렸습니다. \n");
	}

	return 0;

}