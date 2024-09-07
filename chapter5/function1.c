

#include <stdio.h>

//reusability
//abstraction

char fun();

// why are we declaring function at the top;

// implicit declaration => 
// 



















int area(int length , int breadth)
{
    int area;
    area = length*breadth;
    return area;
}


int main(){
    int l = 10 , b = 5;

    char c = fun();

    printf("charaacter is %c" , c);

    int are = area(l , b);
    printf("%d" , are);
    return 0 ;
}

char fun(){
    return "a";
}

