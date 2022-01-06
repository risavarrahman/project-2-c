#include <stdio.h>
#include <stdlib.h>

int main(void){

    int baris = 1,
    	kolom = 10,
    	i, j, matrik1[10][10] matrik2[10][10], jumlah[10][10];
    	
    	
    printf("Input nilai matrik 1 : \n");
    for ( i = 0; i < baris; i++) {
    	for ( j = 0; j < kolom; j++) {
    		printf("Input Matrik 1 [%d][%d]: ", i+1,j+1);
    		scanf("%d", &matrik1[i][j]);
		}
	}
	
	printf("Matrik 1 : ");
	for ( i = 0; i < baris; i++) {
		for ( j = 0; j < kolom; j++) {
			printf("%3d", matrik1[i][j]);
		}
		printf("\n");
	}
	
	printf("Input nilai matrik 2 : \n");
    for ( i = 0; i < baris; i++) {
    	for ( j = 0; j < kolom; j++) {
    		printf("Input Matrik 2 [%d][%d]: ", i+1,j+1);
    		scanf("%d", &matrik2[i][j]);
		}
	}
	
	printf("Matrik 2 : ");
	for ( i = 0; i < baris; i++) {
		for ( j = 0; j < kolom; j++) {
			printf("%3d", matrik2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Hasil Penjumlahan Matriks : \n");
	for ( i = 0; i < baris; i++) {
		for ( j = 0; j < kolom; j++) {
			jumlah[i][j] = matrik1[i][j] + matrik2[i][j];
			printf("%d\t", jumlah[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;

}
