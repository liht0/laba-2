#include <stdio.h>
int main(){
	double array [3][3];
	int i,j;
	double main_diagonal_summa = 0.0;
	double secondary_diagonal_summa
	printf ("vvedite znacheniya dlya massiva:\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("array[%d][%d]" = i, j);
			scanf("%lf", &array[i][j]);
		}
	}
	printf ("Massive 3x3\n");
	   for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
				printf ("%.2f", array[i][j]);
		}
		printf ("\n");
	}	
	return 0;
}
