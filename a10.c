#include <stdio.h>
int main(){

int n;
int f = 0;
printf("Informe o valor de n : \n");
scanf("%d",&n);
if(n ==0){
    f = 0;
}else if(n == 1){
    f = 1;
}else{
    while(n >= 2){

        f += n * (n-1);
        --n;
    }

}
printf("factorial : %d",f);

return 0;
}
