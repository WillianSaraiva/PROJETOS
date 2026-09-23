#include <stdio.h>

int main(){
    int idade;

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    //Crianca < 12
    //Adolescente 12 <= x < 18
    //Adulto 18 >= x < 60
    //Isodo > 60

    if (idade >= 60){
        printf("Voce e um idoso!\n");
    }else if (idade >= 18 && idade < 60){
        printf("Voce e um adulto!\n");
    }else if (idade >= 12 && idade < 18){
        printf("Voce e um adolescente!\n");
    }else{
        printf("Voce e uma crianca!\n");
    }

    //if (idade < 12){
        //printf("Voce e uma crianca!");
   // } else if (idade >= 12 && idade < 18){
       // printf("Voce e um adolescente!\n");
   // } else if (idade >= 18 && idade < 60){
       // printf("Voce e um adulto!");
   // } else {
       // printf("Voce e um idoso\n");
   // }

    return 0;
    
}