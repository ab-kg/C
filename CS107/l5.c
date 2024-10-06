#include<stdio.h>

// void *lsearch(void *key , void *base , int n , int elemSize , int (*cmpfn)(void* , void*));
// int intCmp(void * , void *);

// int main()
// {
//     int arr[] = { 4 , 2 , 3 , 7 , 11, 6};
//     int size = 6 ;
//     int number = 34;
//     void *found = lsearch( &number , arr , 6 , sizeof(int) , intCmp );
//     if(found == NULL)
//     {
//         printf("Sad cos coudn't find the the element");
//     }else {
//         printf("happy found the element ");
//     }
//     return 0 ;
// }


// // we are writing generic linear search which can be applied to any data structure 
void *lsearch(void * key , void* base , int n , int elemSize , int (*cmpfn)(void* , void*) )
{
    for(int i = 0 ; i < n ; i++)
    {   
        void *elemAddr = (char *)base + i*elemSize ;
        if(cmpfn(key , elemAddr ) == 0 )
        {
            return elemAddr ;
        }
    }
    return NULL;
}

// // can we make it more generic 
// int intCmp(void *elem1 , void *elem2)
// {
//     int *ip1 = elem1 ;
//     int *ip2 = elem2;
//     return *ip1 - *ip2 ;
// }

// --------------------------------------------

// int main()
// {
//     char *notes[] = {"Ab" , "F#" , "B" , "Gb" , "D"};
//     char *favouriteNote = "Eb";
//     char **found = lsearch(&favouriteNote , notes , 5 , sizeof(char*) , strCmp );
//     return 0 ;
// }

// int strCmp(void *vp1 , void*vp2 )
// {
//     char *s1 = *(char **)vp1;
//     char *s2 = *(char **)vp2;
//     return strcmp(s1 , s2);
// }

// void *bsearch(void *key , void* base , int n , int elemSize , int (*cmp)(void * , void*) )

// ----------------------------------------------------




