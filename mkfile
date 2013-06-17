CC=cc
CFLAGS=-Wall -std=c99

printbits: printbits.c
    $CC $CFLAGS -o printbits printbits.c

clean:
    rm -rf printbits
