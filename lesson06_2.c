#include <stdio.h>

int main(void)
{
	int num = 0;
	int sum = 0;

	printf("���� ������ �Է��ϼ���. (0�̸� ����) \n");
	do
	{
		scanf("%d", &num);
		sum += num;
	}
	while(num);
	printf("���� ������ �հ�� %d�Դϴ�. \n", sum);

	return 0;
}
