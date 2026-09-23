#include <stdio.h>

int main() {

    char *nomes[] = {"Alice", "Bob", "Carol"};

    for(int i = 0; i <= 2; i++) {
        printf("%s \n", nomes[i]);
    }

    return 0;
}