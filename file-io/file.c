// writing using editor
// writing using binary
// read and write to text file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // FILE* fptr ;

    // fptr = fopen("filename.txt" , "w");

    // if(fptr == NULL)
    // {
    //     printf("The file is not opened. The program will");
    //     exit(0);
    // }else{
    //     printf("the file is created successfully");
    // }

    // declare a filePointer
    FILE * fptr2; 

    // opening the existing file 
    // in write mode using "W" attribute
    fptr2 = fopen("fil.txt" , "w");

    if(fptr2 == NULL)
    {
        printf("GfgTest.c file failed to open.");
    }

    fprintf(fptr2 , "%s %s %s %d", "We" , "are" , "in" , 2020);
    fputs(" a" , fptr2);
    fputs(" abhihsek is was here , fk ur english grammmare \n" , fptr2);
    

    fclose(fptr2);



    return 0 ;
}