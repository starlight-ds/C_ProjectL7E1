/*
 * Jazminna_Smirni_lab_7_ex1.c
 *
 *  Created on: Apr 3, 2024
 *      Author: jsmirni
 */


#include <stdio.h>
#include <string.h>

#define STR_LEN 25

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	char word[STR_LEN];


	while (1){
		printf("Enter a word (less than 25 characters long):\n");
		scanf("%s", word);
		if (word[0] == '9'){
			break;
		}
		printf("%s starts with the letter %c\n", word, word[0]);
	}



	return 0;
}

