#include <stdio.h>
#include <string.h>
#define MAX 1000


//�Է��� �ް� ������ ��� �ڸ��� ���� 1���̰� ���� �� Ȯ�� 
int main()
{
	int i = 0;
	int length;
	char input[MAX];
	int check = 1; // 0�̸� �ƴ� 
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
		printf("����");
	}
	else
		printf("�ƴ�");

}