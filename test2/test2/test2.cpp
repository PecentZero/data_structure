#include <stdio.h>
#include <string.h>
#define MAX 1000


//입력을 받고 인접한 모든 자리의 수가 1차이가 나는 지 확인 
int main()
{
	int i = 0;
	int length;
	char input[MAX];
	int check = 1; // 0이면 아님 
	scanf("%s", input);
	length = strlen(input);

	while (i < length-1)
	{

		if (((input[i] - input[i+1]) != 1)  && ((input[i] - input[i + 1]) != -1))
		{
			printf("%d", i);
			check = 0;
			break;
		}
		i++;

	}

	if (check)
	{
		printf("맞음");
	}
	else
		printf("아님");

}