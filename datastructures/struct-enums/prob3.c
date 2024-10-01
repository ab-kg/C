
#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[50];
    char author[10];
    int price ;
};


int main()
{
    struct Book book1 , book2  , book3 ;

    printf("give us bookname , author , price ");
    scanf("%s %s %d" , &book1.title , &book1.author , &book1.price);
    printf("give us bookname , author , price ");
    scanf("%s %s %d" , &book2.title , &book2.author , &book2.price);
    printf("give us bookname , author , price ");
    scanf("%s %s %d" , &book3.title , &book3.author , &book3.price);

    
    struct Book mostExpensive ;
    if (book1.price >= book2.price && book1.price >= book3.price) {
        mostExpensive = book1;
    } else if (book2.price >= book1.price && book2.price >= book3.price) {
        mostExpensive = book2;
    } else {
        mostExpensive = book3;
    }

    struct Book lowestPriced ;
     if (book1.price <= book2.price && book1.price <= book3.price) {
        lowestPriced = book1;
    } else if (book2.price <= book1.price && book2.price <= book3.price) {
        lowestPriced = book2;
    } else {
        lowestPriced = book3;
    }   

    printf("\n Most Expensive Book: \n");

    printf("Title: %s\n" , mostExpensive.title);
    printf("Author: %s\n" , mostExpensive.author);
    printf("price : %d\n" , mostExpensive.price);


    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", lowestPriced.title);
    printf("Author: %s\n", lowestPriced.author);
    printf("Price: %.d\n", lowestPriced.price);










    // int c ; // c = high 
    // int l ; // b = low 
    // if( b1.price > b2.price)
    // {
    //     c = b1.price ;
    //     l = b2.price;
    //     if( b1.price > b3.price)
    //     {
    //         c = b1.price;
    //     }else {
    //         c = b3.price ;
    //     }

    //     if( b2.price < b3.price)
    //     {
    //         l = b2.price ;
    //     }else {
    //         l = b3.price ;
    //     }        

    // }else {
    //     c = b2.price ;
    //     if(b2.price > b3.price)
    //     {
    //         c = b3.price ;
    //     }
    // }


    // printf("lowest price is %d" , l);
    // printf("highest price is %d" , c);


    return 0 ;
};


