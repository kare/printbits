#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void to_bit_string(short bits, char *result) {
	for (int i = 7; i > -1; i--) {
		*result++ = (bits & 1) + '0';
		bits >>= 1;
	}
}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		fprintf(stderr, "Usage: printbits integer\n");
		exit(EXIT_FAILURE);
	}
	char result[9];
	memset(result, '\0', 8);
	to_bit_string(atoi(argv[1]), result);
	printf("%s\n", result);
}
