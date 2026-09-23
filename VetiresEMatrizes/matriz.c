#include <stdio.h>

int main() {

    int numero[3][3] = {
        {1,2,3},
        {3,5,6},
        {7,8,9}
    };
    printf("Numero das colunas %d", numero[2][1]);
}