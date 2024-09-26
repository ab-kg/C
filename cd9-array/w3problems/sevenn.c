#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a program in c to merge two arrays of the same size sorted in descending order

// 1.form an array by combining two small arrays
// 2.sort it 
// 3.print it in descending order 


int main()
{
    int n ;
    
    printf("input the number of elements to be stored in both the arrays: ");
    scanf("%d" , &n);
    int arr[n];
    printf("Input %d elements in the first array \n" ,n);
    for(int i = 0 ; i<n ;i++)
    {
        printf("Element - %d : " , i+1 );
        scanf("%d" , &arr[i]);
    }   

    int arr2[n];
    printf("\nInput %d elements in the array in the second array \n" ,n);
    for(int i = 0 ; i< n;i++)
    {
        printf("Element - %d : " , i+1 );
        scanf("%d" , &arr2[i]);
    }  


    int arr3[2*n];
    for(int i = 0 ; i< n ; i++)
    {
        arr3[i] = arr[i];
    };

    for(int i = 0 ; i< n ; i++)
    {
        arr3[n+i] = arr2[i];
    }

    printf("merged array\n");
    for(int i = 0 ; i < 2*n ; i++)
    {
        printf("%d " , arr3[i]);
    }

    // now i need sort this what sorting method should i use 

    int n3 = 2*n ;
    int temp= 0 ;
    

    for(int i = 0 ; i< n3 ; i++)
    {
        for(int j = 0 ; j < n3 ; j++)
        {
            if(arr3[j] <= arr3[j+1] )
            {
                temp = arr3[j+1];
                arr3[j+1] = arr3[j];
                arr3[j]  = temp ;
            } 
        }
    }

    printf("\n the merged array in decending order is : \n");
    for(int i = 0 ; i< n3; i++)
    {
        printf("%d  " , arr3[i]);
    }

    printf("\n\n");

    return 0 ;
}