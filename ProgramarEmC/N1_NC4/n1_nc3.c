#include <stdio.h>

int main(void){
    int age = 25;
    float height = 1.75;
    char name[32] = "Willian";

    printf("Enter your age:");
    scanf("%d", &age);
    printf("The age is: %d\n", age);
    
    printf("Enter your height:");
    scanf("%f", &height);
    printf("The hieght is: %.2f\n", height);

        // --- PARTE MODIFICADA ---
    printf("Enter your name:");
    getchar(); // Limpa o "Enter" que sobrou do scanf anterior
    fgets(name, sizeof(name), stdin);
    printf("The name is: %s\n", name);

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato.
    %i: Equivalente a %d.
    %f: Ponto flutuante (float / double) em notação decimal.
    %e: Ponto flutuante em notação científica.
    %g: Usa o formato %f ou %e (o que for mais curto).
    %c: Um único caractere (char).
    %s: Cadeia de caracteres (texto/string).
    %x: Hexadecimal sem sinal (letras minúsculas/maiúsculas).
    %o: Octal sem sinal.
    %p: Endereço de ponteiro.
    %%: Imprime o próprio símbolo de porcentagem.
    */
}