#include <stdio.h>

void minMax(int arr[], int len , int *min , int *max)
{
    *min , *max = arr[0];
    int i ;
    for( i = 1 ; i< len ; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }

    printf("%d " , *min);
    printf("%d \n" , min);

}

int main()
{   
    int a[] = { 23 , 4, 31 , 98 , 987 , 45 , 32 , 10 , 123 , 986 , 50 , 3 , 4 ,5 };
    int min ,max ; 
    int len = sizeof(a)/sizeof(a[0]);
    minMax(a , len , &min , &max);
    printf("Minimum value in the arry is : %d and maximum value is: %d \n" , min , max);

   return 0 ;   
}

// when you run the dry run on this piece of code we can see the importance of pointers
// and how we can use the pointers and change the values of variables and do nothing else .


// where the concept of pointer is used 
// we cannot return two values from the minMax function 
// so we are using pointers and directly changing the values of real values 

// now we dont need to return and then assign the new values to the old values 
// we can directly change the values of the original values 

