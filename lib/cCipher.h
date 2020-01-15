#include <stdio.h>
#include <string.h> // Library fungsi dari (strlen)

typedef unsigned short int USI;

typedef struct Data{
	char *plaintext;
	USI key;
} x, *y;

void cCipher(y swap ){
	int cipher = 0;	

	printf("Ciphertext: ");
	for (int i = 0; i < strlen(swap->plaintext); i++){
		cipher = (*swap).plaintext[i];
		// Memeriksa satu persatu huruf
		// Jika variabel plaintext menyimpan space maka nilainya tetap
		if (swap->plaintext[i] == ' ')
			cipher = ' ';
		
		else if (swap->plaintext[i] >= 'A' && swap->plaintext[i] <= 'Z')
			cipher = ((swap->plaintext[i] + (*swap).key - 'A') % 26) + 'A';
		else if (swap->plaintext[i] >= 'a' && swap->plaintext[i] <= 'z')
			cipher = ((swap->plaintext[i] + (*swap).key - 'a') % 26) + 'a';

		printf("%c", cipher);
	}
	printf("\n");
}
