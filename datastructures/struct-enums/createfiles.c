#include <stdio.h>

// int main()
// {
//     FILE *fptr ;
//     fptr = fopen("newfilename.txt" ,"r");

//     char myString[100];

//     // fgets function is used here which takes three parameters
//     // fgets here takes string variable where the content of the  file will be stored 
//     // second parameter is the maximum data which should be read from the file
//     // third argument is the file pointer that is used to read the file

//     fgets(myString , 100 , fptr);

//     printf("%s", myString);

//     // Close the file
//     fclose(fptr);
//     return 0 ;
// };


int main()
{
    FILE *fptr;

    fptr = fopen("new.txt" , "r");

    if(fptr == NULL)
    {
        printf("NOt able to open the file");
    }

    char myString[100];

    while(fgets(myString , 100 , fptr))
    {
        printf("%s" , myString);
    }

    fclose(fptr);
}


