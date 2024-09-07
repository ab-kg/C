

#include <stdio.h>


int fun2(){
    printf("Academy");
    return 1;
}

int fun1(){
    printf("Neso");
    return 1 ;
}


int main(){

    int a ;
    a = fun2() + fun1();
    printf("%d" , a);
    return 0;
}

