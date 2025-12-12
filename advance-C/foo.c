#include <stdio.h>
#include <fcntl.h>    // For open()
#include <unistd.h>  

struct foo {
    int first_4 : 4 ;
    int next_4 : 4 ;
    int alone : 1 ;
    int rest : 7 ;
};


int main()
{   
    printf("%zu\n" , sizeof(struct foo));
    struct foo f ;
    f.first_4 = 2 ;
    f.next_4 = 4 ;
    f.alone = 1 ;

    // int fd = open(...);
    // read(fd , f , sizeof f);
    return 0 ;
}

