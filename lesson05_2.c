#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("�� ���� ������ �Է��Ͻÿ�. \n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	if (num1 < num2)
	{
		printf("%d���� %d��(��) ū ���Դϴ�. \n", num1, num2);
	}
	else if(num1 > num2)
	{
		printf("%d���� %d��(��) ū ���Դϴ�. \n", num2, num1);
	}
	else
	{
		printf("�� ���� ���� ���� ���Դϴ�. \n");
	}

	return 0;
}