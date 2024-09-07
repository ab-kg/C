

#include <stdio.h>

int main(){
    // int n = 2 ;
    // for(int i= 0; i < 20 ; i++){
    //     if( i == n ){
    //         n = n+ 2; 
    //         continue;
    //     }
    //     printf("%d" , i ) ;
    // }

    int i ;
    for(i = 0 ; i< 20 ; i++){
        switch(i)
        {
            case 0 : i+=5 ;
                    break;
            case 1 : i+=2 ;
                    break;
            case 5 : i+=5 ;
                    break;
            default: i +=4 ;
                    break ;
        }
        printf("%d " , i);
    }


























    return 0 ;
}
