#include <stdio.h>
#include <stdlib.h>

int main(void){

    char *angka = (char *) malloc(10);
    bool palindrome = false;
    
    if (angka == 0) {
    	printf("\nERROR : Out of memory. \n\n");
    	return 1;
	}
	
	printf("\n Masukkan input dan Cek apakah inputan berupa Palindrome atau tidak : \n ");
	scanf("%s", angka);
	
	int word_length = strlen(angka);
	
	LowerCharacters(angka, word_length);
	
	for( int i = 0; i < word_length; i++) {
		if (angka[i] == angka[word_length-1-i])
		palindrome = true;
		else {
			palindrome = false;
			break;
		}
	}
	
	palindrome ? printf("\n Inputan %s merupakan palindrome. \n\n", angka) :
		print("\n Inputan %s bukan merupakan palindrome. \n\n", angka);
		
	free(angka);
	
return 0;

}

void LowerCharacters(char *angka, int word_length) {
	for (int i = 0; i < word_length; i++) {
		angka[i] = tolower(angka[i]);	
	}
	
	return 0;
}
		