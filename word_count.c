#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("Usage: ./word_count <words separated by space>\n");
        return 1;
    }
    int num = argc - 1;
    printf("\nThere are %i words\n\n", num);
}
