#include <stdio.h>

int main(){
    int port, mat, his, geo;
    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //E 
    printf("Digite a Nota de Portugues:\n");
    scanf("%d", &port);

    printf("Digite a Nota de Matematica:\n");
    scanf("%d", &mat);

    printf("Digite a Nota de Historia:\n");
    scanf("%d", &his);

    printf("Digite a Nota de Geografia:\n");
    scanf("%d", &geo);

    if (port >= 90){
        printf("Nota A em Portugues\n");
    }else if (port >= 80){
        printf("Nota B em Portugues\n");
    }else if (port >= 70){
        printf("Nota C em Portugues\n");
    }else if (port >= 60){
        printf("Nota D em Portugues\n");
    }else {
        printf("Nota E em Portugues\n");
    }

    if (mat >= 90){
        printf("Nota A em Matematica\n");
    }else if (mat >= 80){
        printf("Nota B em Matematica\n");
    }else if (mat>= 70){
        printf("Nota C em Matematica\n");
    }else if (mat >= 60){
        printf("Nota D em Matematica\n");
    }else {
        printf("Nota E em Matematica\n");
    }

    if (his >= 90){
        printf("Nota A em Historia\n");
    }else if (his >= 80){
        printf("Nota B em Historia\n");
    }else if (his >= 70){
        printf("Nota C em Historia\n");
    }else if (his >= 60){
        printf("Nota D em Historia\n");
    }else {
        printf("Nota E em Historia\n");
    }

    if (geo >= 90){
        printf("Nota A em Geografia\n");
    }else if (geo >= 80){
        printf("Nota B em Geografia\n");
    }else if (geo >= 70){
        printf("Nota C em Geografia\n");
    }else if (geo >= 60){
        printf("Nota D  em Geografia\n");
    }else {
        printf("Nota E em Geografia\n");
    }

    /*if (port >= 90 && mat >= 90 && his >= 90 && geo >= 90){
        printf("Notas perfeitas!\n"
        "Aluno aprovado!\n");
    } else if ((port >= 80 && port <= 90) && (mat >= 80 && mat <= 90) && (his >= 80 && his <= 90) && (geo >= 80 && geo <= 90)){
        printf("Notas excelentes!\n"
        "Aluno aprovado!\n");
    } else if (port < 60 && mat < 60 && his < 60 && geo < 60){
        printf("Reprovado, tera que repetir de ano!\n");
    } else if (port < 60){
        printf("Reprovado em portugues!");
    } else if (mat < 60){
        printf("Reprovado em matematica!");
    } else if (his < 60){
        printf("Reprovado em historia!");
    } else if (geo < 60){
        printf("Reprovado em geografia!");
    } else {
        printf("Aprovado, mas precisa melhorar!");
    }
    */

    if (port >= 80 && port <= 90){
        if (mat >= 80 && mat <= 90){
            if (his >= 80 && his <= 90){
                if (geo >= 80 && geo <= 90){
                    printf("Notas Altas!\n");
                } else {
                    printf("Precisa melhorar em Geografia!\n");
                }
            } else {
                printf("Precisa melhorar em Historia!\n");
            }
        } else {
            printf("Precisa melhorar em Matematica!\n");
        }
    } else {
        printf("Precisa melhorar em Portugues!\n");
    }
    
    return 0;

    
}