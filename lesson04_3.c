#include <stdio.h>

int main(void)
{
	
	double height, width;

	printf("�ﰢ���� ���̸� �Է��ϼ���. \n");
	scanf("%lf", &height);

	printf("�ﰢ���� �غ��� �Է��ϼ���. \n");
	scanf("%lf", &width);

	printf("�ﰢ���� ���̴� %f�Դϴ�. \n", height * width / 2);
}