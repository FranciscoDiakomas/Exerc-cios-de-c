#include <stdio.h>
float main(){

float n1 , n2 , n3 , media;
char nome[30] , status[30];

printf("Degite o Nome : ");
scanf("%s",&nome);

printf("Degite o valor do primeiro Nota: ");
scanf("%f",&n1);

printf("Degite o valor do Segunda Nota : ");
scanf("%f",&n2);

printf("Degite o valor do Terceira Nota : ");
scanf("%f",&n3);

media = (n1+n2+n3)/3;
if(media <= 9){
    printf("Media : %f , Nome : %s , Status: Reprovado", media,nome);

}else{

    printf("Media : %f \n, Nome : %s \n, Status: Aprovado\n", media,nome);

}

}
