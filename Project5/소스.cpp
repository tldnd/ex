#include <stdio.h>

void main()
{

	int array2D[3][3] = { { 1,1,1 }, { 2,2,2 }, { 3,3,3 } };

	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d", array2D[i][j]);
		}
		printf("\n");
	}

}