#include <stdio.h>
#define MAX_SIZE 100
/*
input 예제
6 6 8
0 0 15
0 3 22
0 5 -15
1 1 11
1 2 3
2 3 -6
4 0 91
5 2 28
*/


// 행렬 transpose 구하기
typedef struct {
	int row;
	int col;
	int val;

}element;

void transpose(element *elements, element  *transposed)
{
	int index = 1;
	transposed[0].row = elements[0].col;  // the number of transposed 's row
	transposed[0].col = elements[0].row;  // the number of transposed 's col
	transposed[0].val = elements[0].val; //// the number of transposed 's nonzero elements

	for (int i = 0; i <= elements[0].col; i++)
	{
		for (int j = 1; j <= transposed[0].val;j++)
		{
			if (i == elements[j].col)
			{
				transposed[index].row = elements[j].col;
				transposed[index].col = elements[j].row;
				transposed[index].val = elements[j].val;
				index++;
			}

		}
	}

	return;
}



int main()
{
	element elements[MAX_SIZE];
	element transposed[MAX_SIZE];
	int row, col, value, temp;
	
	printf("Enter the number of row and col and nonzero elements respectivley\n>");
	scanf(" %d %d %d", &elements[0].row, &elements[0].col,&elements[0].val);

	for (int i = 1; i <= elements[0].val; i++)
	{
		scanf(" %d %d %d", &elements[i].row, &elements[i].col, &elements[i].val);
	}

	transpose(elements,transposed);

	printf("\nAfter Transpose");

	for (int i = 0; i <= elements[0].val; i++)
	{

		printf("\n%d %d %d", transposed[i].row, transposed[i].col, transposed[i].val);
	}


	return 0;

}