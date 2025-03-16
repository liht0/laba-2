#include <stdio.h>
int main(){
	double array [3][3];
	int i,j;
	double main_diagonal_summa = 0.0;
	double secondary_diagonal_summa;
	printf("vvedite znacheniya dlya massiva:\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("array[%d][%d] = ", i, j);
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
	for (i = 0; i < 3; i++) {
		main_diagonal_summa += array [i][i];
		secondary_diagonal_summa += array [i][2-i];
			}
	printf("summa chisel na glavnoy diagonali: %.2f\n", main_diagonal_summa);
		printf("summa chisel na pobochnoy diagonali: %.2f\n	", secondary_diagonal_summa);
	return 0;
}
