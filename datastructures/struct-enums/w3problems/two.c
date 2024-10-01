#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Time {
    int hours ;
    int minutes ;
    int seconds;
};




int main()
{   
    struct Time t1 , t2 , result;
    printf("input the time1 : inorder of (hours minute seconds)")    ;
    scanf("%d %d %d" , &t1.hours , &t1.minutes , &t1.seconds);
    
    printf("input the time2 : inorder of (hours minute seconds)")    ;
    scanf("%d %d %d" , &t2.hours , &t2.minutes , &t2.seconds);

    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds/60;
    result.hours = t1.hours + t2.hours + result.minutes/60 ;

    result.minutes = result.minutes % 60 ;
    result.seconds = result.seconds % 60 ;

    printf("\n Resultant time ; %02d:%02d:%02d" , result.hours , result.minutes ,result.seconds);

    return 0 ;
}