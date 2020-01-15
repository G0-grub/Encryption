#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/cCipher.h"

int input;

int main(void){
	
	printf("1.Caesar Cipher\n");
	printf("2.RSA\n");
	
	printf("pilih: ");
	scanf("%i", &input);

	if (input == 1){
		x cC;
		cC.plaintext = malloc(77 * sizeof(char));

		printf("Masukan Key: ");
		scanf("%i", &cC.key);
		while(getchar() != '\n');
		printf("Plaintext: ");
		gets(cC.plaintext);

		cCipher(&cC);
		free(cC.plaintext);
		return 0;
	}
}
