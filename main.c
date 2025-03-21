#include <stdio.h>
#include <math.h>
int main(){
	double Massive [3][3];
	int i, j, m;
	double main_diagonal_summa = 0.0;
	double secondary_diagonal_summa = 0.0;
	printf("vvedite znacheniya dlya matrici 3x3:\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Massive[%d][%d] = ", i, j);
			scanf("%lf", &Massive[i][j]);
	}
	}
	printf ("Massive 3x3\n");
	   for (i = 0; i < 3; i++) {
       		 for (j = 0; j < 3; j++) {
				printf ("%.2f\t", Massive[i][j]);
				printf ("\n");
	}	
	}	
	for (i = 0; i < 3; i++) {
		main_diagonal_summa += Massive [i][i];
		secondary_diagonal_summa += Massive [i][2-i];
	}
	printf("\nsumma chisel na glavnoy diagonali: %.2f\n", main_diagonal_summa);
	printf("summa chisel na pobochnoy diagonali: %.2f\n\n	", secondary_diagonal_summa);

	
	int massive [2][2];
	printf("vvedite znacheniya dlya matrici 2x2:\n");
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			printf("massive[%d][%d] = ", i, j);
			scanf("%d", &massive[i][j]);
	}
	}
	printf("Massive 2x2\n");
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			printf("%d\t ", massive[i][j]);
	}
	printf ("\n");
	}	
 	int znacheniya[2][2];
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			znacheniya [i][j] = 0;	
				for (m=0; m<2; m++){
				znacheniya[i][j] += massive[i][m] * massive[m][j];
	}  			
	}
	}
printf("\nKvadrat matrici:\n");
for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        printf("%d\t", znacheniya[i][j]); 
    }
    printf("\n");	
			
}
return 0;
}
