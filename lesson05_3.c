#include <stdio.h>

int main(void)
{
	int num;

	printf("0���� 10������ ������ �Է��Ͻÿ�. \n");
	scanf("%d", &num);

	if(num >= 0 && num <= 10)
	{
		printf("�����Դϴ�. \n");
	}
	else
	{
		printf("Ʋ�Ƚ��ϴ�. \n");
	}
	
	return 0;
}
