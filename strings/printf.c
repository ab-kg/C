#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char *ptr = "Hello world";


int main()
{
//     printf("%.5s\n", ptr  );
//     printf("%100.5s", ptr  );
        // puts(ptr);
        // puts(ptr);

    char a[10];
    printf("Enter the string \n");
    fgets(a , sizeof(a) , stdin );
    printf("%s" , a);

    return 0 ;
}



