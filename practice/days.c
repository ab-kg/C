#include <stdio.h>

int main()
{
    int month ;
    printf("entrer the month");
    scanf("%d" , &month);
    // 31 28 31 30 31 30 31 31 30 31 30 31
    switch(month)
    {
        case 1 : 
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10:
        case 12:
            printf("31 days");
            break;
        case 2:
            printf("2nd month is a februrary and hve 28 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;
        default:
            printf("invalid month");
            break;
    }
}