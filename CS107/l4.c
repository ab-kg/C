#include<stdio.h>


int main()
{
    char *h = "Fred";
    char *w = "Wilma";

    return 0 ;
}

int lsearch2(int key , int arr[] , int size)
{
    for(int i = 0 ; i< size ; i++)
    {
        if(arr[i] == key)
        {
            return i ;
        }
    }
    return -1;
}


void* lsearch1(void *key , void *base , int n , int elemSize)
{
    for(int i = 0 ; i< n ; i++)
    {
        void *elemAddr = (char*)base + i*elemSize ;
        if(memcmp(key , elemAddr , elemSize) == 0 )
        {
            return elemAddr ;
        }
    }
    return NULL ;
}

void *lsearch(void *key , void *base ,int n , int elemSize , int(*cmpfn)(void * , void*) ); 







// void swap(void *vp1 , void *vp2 , int size)
// {
     
// }




// all pointers are 8 bytes 