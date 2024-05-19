
#include <stdio.h>
int main(){

int nota1 , nota2 , nota3 , media;
char status[30];

printf("Degite a primeira nota: \n");
scanf("%d",&nota1);

printf("Degite a segunda nota: \n");
scanf("%d",&nota2);

printf("Degite a terceira nota: \n");
scanf("%d",&nota3);

media = (nota1 + nota2 + nota3) / 3;
printf("Media: %d ",media);
return 0;
}
