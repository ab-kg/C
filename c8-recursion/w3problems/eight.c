#include<stdio.h>

// Define the maximum size of the array
#define MAX 100

int MaxElem(int arr[]);  // Function prototype
int n;  // Number of elements in the array

int MaxElem(int arr[])
{
    static int i = 0, hstno = -9999;
    if(i < n)
    {
        if(hstno < arr[i])
        {
            hstno = arr[i];
        }
        i++;
        MaxElem(arr);  // Recursive call
    }
    return hstno;  // Return the maximum element
}

int main()
{   
    // Declare and initialize the array
    int arr[MAX] = {1, 2, 3, 4, 5};
    n = 5;  // Set the number of elements in the array

    // Call the MaxElem function to find the maximum element
    int ans = MaxElem(arr);
    
    // Print the maximum element
    printf("The maximum element is: %d\n", ans);

    return 0;  // Return 0 to indicate successful execution
}
