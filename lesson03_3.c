#include <stdio.h>

int main(void)
{
	int ch;
	printf("알파벳의 첫 문자는 무엇입니까? \n");
	scanf("%c", &ch);

	printf("알파벳의 첫 문자는 %c입니다. \n", ch);

	return 0;
}