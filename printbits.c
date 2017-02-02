#include <u.h>
#include <libc.h>

void main(int argc, char *argv[]) {
	if (argc != 2) {
		fprint(2, "usage: %s integer\n", argv[0]);
		exits("usage");
	}
	int bits = atoi(argv[1]);
	print("%b\n", bits);
	exits(0);
}
