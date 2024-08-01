#include <stdio.h>
int main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("Usage: ./word_count <words separated by space>\n");
        return 1;
    }
    printf("\n");
    int num = argc - 1;
    for (int i = 0; i < num; i++) {
        printf("%i. %s\n",i+1, argv[i + 1]);
    }
    printf("\n");
}
