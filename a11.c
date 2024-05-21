#include <stdio.h>
int main(){

float n1 , n2 , res ;
char op[1];

printf("Degite o primeiro numero: ");
scanf("%f",&n1);

printf("Degite o segundo numero: ");
scanf("%f",&n2);

printf("Informe a operacao: ");
scanf("%s",&op);

if(op == "+"){
    res = n1 + n2;
}else if(op == "-"){
    res = n1 - n2;
}else if(op == "*"){
    res = n1 * n2;
}else if(op == "/"){
    res = n1 / n2;
}else{
    res = -1;
}
printf("Resultado : %f",res);
return 0;
}
