#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void TheFullNames(char** full_names);

char** Get4FullNames() {
	char **full_names = (char**)malloc(4 * sizeof(char*));
	unsigned long int size = 0;

	printf("Input 4 full names: \n");
	for (unsigned char full_name = 0; full_name < 4; ++full_name) {
		getline(&full_name[full_names], &size, stdin);
	}

	return(full_names);
}

void PrintOutTheFirstNamesInOneLine(char** full_names) {
	
	printf("The first names in one line: ");
	for (unsigned char first_names = 0; first_names < 4; ++first_names) {
		unsigned long long int character = 0;
		while (full_names[first_names][character] > 32 && full_names[first_names][character] < 127) {
			printf("%c", full_names[first_names][character]);
			++character;
		}
		if (first_names <= 2) {
			printf("; ");
		}
	}
	printf(".\n");
}

void Sort(char** full_names) {
	srandom(time(NULL));

	for (unsigned char full_name = 0; full_name < 4; ++full_name) {
		unsigned char random_name = random() % 4;
		char* placeholder = full_name[full_names];
		full_name[full_names] = random_name[full_names];
		random_name[full_names] = placeholder;
	}

	return(TheFullNames(full_names));
}

void TheFullNames(char** full_names) {

	if (strcmp(full_names[0], full_names[1]) < 0 && strcmp(full_names[1], full_names[2]) < 0 && strcmp(full_names[2], full_names[3]) < 0) {
		printf("The full names in alphabetical order: \n");
		for (unsigned char full_name = 0; full_name < 4; ++full_name) {
			printf("%s", full_name[full_names]);
		}
		free(full_names);
		return;
	}
	else {
		return(Sort(full_names));
	}
}

int main() {
	char **full_names = (char**)malloc(4 * sizeof(char*));

	full_names = Get4FullNames();
	PrintOutTheFirstNamesInOneLine(full_names);
	TheFullNames(full_names);

	return(0);
}