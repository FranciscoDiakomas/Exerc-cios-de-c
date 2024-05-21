#include <stdio.h>
int main(){

int a , b ,c , maior;
printf("Degite o valor de a: \n");
scanf("%d",&a);
printf("\nDegite o valor de b: \n");
scanf("%d",&b);
printf("\nDegite o valor de c: \n");
scanf("%d",&c);

if(a > b && a > c ){
    maior = a;
}else if(b > a && b > c){
    maior = c;

}else{
    maior = c;
}
printf("\nMaior : %d",maior);
 return maior;
}
