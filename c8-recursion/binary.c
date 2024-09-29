#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[] , int start , int end , int target)
{
    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if( arr[mid] < target )
        {
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return -1 ;
}

int binarySearch2(int arr[] , int start , int end , int target )
{   
    if(start <= end)
    {
        int mid = start + (end - start)/2;
        // check if the key is at the middle
        if(arr[mid] == target)
        {
            return mid;
        }

        if( arr[mid] > target)
        {
            return binarySearch2( arr , start , mid -1  , target);
        }

        return binarySearch(arr , mid + 1 , end , target);
    }    
    return -1 ;
}





int main()
{
    int arr[] = { 1 , 2 ,3 , 5 , 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 3 ;
    int result = binarySearch2(arr , 0 , size-1 , target);

    printf("%d" , result);
    return 0 ;
}

// time complexity
// O(logn)

// space complexity
// O(logn)


