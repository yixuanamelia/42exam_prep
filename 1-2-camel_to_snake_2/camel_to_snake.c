#include <stdio.h>
#include <stdlib.h>

const int NUM_CHARS = 26;
const char *UPPERCASES = "ABCDEFGHIJKLMNOPQRSTUVWXWZ";
const char *LOWERCASES = "abcdefghijklmnopqrstuvwxwz";


int find_char(char c){
	int i=0;
	for (i=0; i < NUM_CHARS; i++){
		if ((UPPERCASES[i] == c)  || (LOWERCASES[i] == c)) {
			return i;
		}
	}
	return -1;
}


char lower(char c) {
	int i = find_char(c);
	if (i < 0)
		return c;
	return LOWERCASES[i];
}


char* camel_to_snake(char* myCamelWord, char* my_snake_word, int word_length) {
	/*
	** Implement here `camel_to_snake`
	*/
}


int main(int argc, char **argv) {
	/*
	** Insert main here
	*/
}
