// Special Pointers 

// 1. Void Pointer 
// pointer whose data type is not fixed , it can take any data type value
// and then type casted into required data type 

int main()
{
    int n = 10 ;
    void *ptr = &n ;

    printf("%d" , *(int*)ptr);

    return 0 ;
}

// void pointer is type casted to integer pointer and then dereferencing is done


// What is the need of void pointer 

// Malloc and Calloc returns a void pointer 
