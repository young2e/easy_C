#include <stdio.h>

int main(void)
{
	char alphabet;

	printf("A~C������ ���ڸ� �Է��ϼ���. \n");
	alphabet = getchar();

	if(alphabet == 'A' || alphabet == 'B' || alphabet =='C')
	{
		printf("�����Դϴ�. \n");
	}
	else
	{
		printf("Ʋ�Ƚ��ϴ�. \n");
	}

	return 0;

}