//  22 problems on pointers

#include <stdio.h>

// int main()
// {
//     int m = 10 ;
//     int *z = &m ;
//     int n ; 
//     printf("&m is the address of the m %d" , &m);
//     printf("&n stores the addres of n %d" , &n );
//     return 0 ;
// }



// int main()
// {
//     int m = 29 ;

//     printf("value of m is %d \n " , m);
//     printf("Address of m : %d \n" , &m);

//     int *ab = &m ;
//     printf("now ab is assigned with the address of m\n ");
//     printf("address of pointer ab: %d \n" , ab);
//     printf("content of pointer ab: %d\n"  , *ab);

//     m = 34;
//     printf("the value of m assigned to 34 now \n");
//     printf("address of ab: %d \n" , &m);
//     printf("content of pointer ab: %d \n" , *ab);

//     *ab = 7; 
//     printf("the pointer variable ab is assigned with the value 7 now \n");
//     printf("address of m : %d \n" , &m);
//     printf("value of m : %d \n" , *ab);


//     return 0 ;
// }


// int main()
// {
//     int m = 300;
//     float fx = 300.6006;
//     char cht = 'z';

//     printf("address of m:  %p\n" , &m);
//     printf("address of fx:  %p\n" , &fx);
//     printf("address of cht:  %p\n" , &cht);

//     int *ab = &m ;
//     float *ac = &fx ;
//     char *ad = &cht;

//     printf("address of m: %p\n" , ab);
//     printf("address of fx: %p\n" , ac);
//     printf("address of cht: %p\n" , ad);
//     return 0 ;
// }




// int add(int *p1 , int *p2);

// int main()
// {
//     // int n1 = 10 ;
//     // int n2 = 20 ;

//     // int *p1 = &n1 ;
//     // int *p2 = &n2 ;

//     // int sum = *p1 + *p2 ;
//     // printf("the sum of the entered numbers is: %d " , sum);

//     int n1 = 10 ; 
//     int n2 = 20 ;
    
//     int sum = add(&n1 , &n2);

//     printf("the sum is %d" ,sum );

//     return 0 ;
// }


// int add(int *n1 , int *n2)
// {
//     int sum ;
//     sum = *n1 + *n2 ;
//     return sum ;
// }


// int main()
// {
//     int n1 = 10 ;
//     int n2 = 20 ;

//     int *p1 = &n1;
//     int *p2 = &n2;

//     printf("input the first number");
//     scanf("%d" , p1);

//     printf("input the second number");
//     scanf("%d" , p2);

//     if(   *p1 > *p2  ){
//     printf("largest no is %d" , *p1);
//     }else {
//         printf("smalles no is %d" , *p1 );
//     }
    
//     return 0 ;

// }






int main()
{
    int arr[5] ;
    int *p = arr;

    

}






