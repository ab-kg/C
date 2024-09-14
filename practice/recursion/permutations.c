#include <stdio.h>

void changePostition(char *c1 , char *c2)
{
    char temp ;
    temp = *c1;
    *c1 = *c2 ;
    *c2 = temp ; 
}

void charPermu(char *cht , int stno , int endno)
{
    int i ; 
    if (stno == endno)
    {
        prinf("%s " , cht );
    }else {
        for( i = stno ; i <= endno ; i++)
        {
            changePostition((cht + stno) , (cht + i ));
            charPermu( cht , stno + 1 ,  endno);
            changePostition((cht + stno) , (cht + i )  );
        }
    }

    return 0 ;
}

int main()
{
    char c[50];

    printf("write all permutations of given word ");
    scanf("%d" , c  );
    
    int n = strlen(c);

    charPermu( c , 0 , n-1 );
    return 0 ;
}



