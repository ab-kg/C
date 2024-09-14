#include <stdio.h>
#include <stdlib.h>


int main()
{
    int fno , sno , *ptr1 = &fno , *ptr2 = &sno ;

    printf("intput the first no");
    scanf("%d" , ptr1);

    printf("input the second no");
    scanf("%d" , ptr2 );

    printf("%d " , fno);
    printf("%d \n" , sno);

    printf("%d " , ptr1);
    printf("%d \n" , ptr2);

    printf("%d ", *ptr1  );
    printf("%d \n", *ptr2 );

    if(*ptr1 > *ptr2)
    {
        printf("%d is the greater no among these." , *ptr1);
    }else{
        printf("%d is the smaller no among these ." , *ptr2);
    }

    return 0 ;
}
