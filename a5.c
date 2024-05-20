#include <stdio.h>
int mai(){

int i , num , res;
printf("informe o numero: ");
scanf("%d",&num);
i = 1;
while(i <= 11){
    res = i * num;
    printf("%d X %d = %d",num,i,res);
    i++;
}

return 0;
}
