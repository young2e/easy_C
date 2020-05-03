#include <stdio.h>

int main(void)
{
	int width;
	printf("정사각형의 변의 길이를 입력하세요.\n");
	scanf("%d", &width);
	printf("정사각형의 넓이는 %d입니다.\n", width*width);

	return 0;

}