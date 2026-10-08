#include <stdio.h>
#include <stdlib.h>

int readfile_flagless(char filename[]) {
    FILE *f;
    f = fopen(filename, "r");

    if (f == NULL) {
        return -1;
    }

    char c;
    while ( (c = getc(f)) != EOF ) {
        printf("%c", c);
    }
    
}

int main(int argc, char *argv[]) {
    switch (argc) {
        case 1:
            printf("ERROR! Try ./cat [file]");
            return 0;
        case 2:
            readfile_flagless(argv[1]);
            return 0;
        default:
            return 0;
    }
}
