#include <stdio.h>

int main(void)
{
	int num, i;

	printf("2 �̻��� ������ �Է��Ͻÿ�. \n");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (i == num)
		{
			printf("%d��(��) �Ҽ��Դϴ�. \n", num);
		}
		else if(num % i == 0)
		{
			printf("%d��(��) �Ҽ��� �ƴմϴ�. \n", num);
			break;
		}
	}
	
	return 0;
}
