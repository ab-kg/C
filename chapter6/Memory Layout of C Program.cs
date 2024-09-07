Memory Layout of C Program

4.Stack
3.Heap
2.Data Segment
    a. Uninitialized Data SEgment => stores global and static variables that are declared but not initializaed.
    b. Initialized Data Segment=> global and static variables that are intialized 
1.Text/Code segment


* Stack LIFO push pop

Activation Record : 
Compiler Design :
is a portion of stack which is genrally comosed of 

int main(){
    int a= 10 ;
    a = fun1(a);
    printf("%d" , a);
}

int fun1(in a )
{
    int b = 5 ;
    b = b+1 ;
    return b;
}

------------------------------------------------------------------
most of the modern languages static scoping is used
most of the old languages  dynamic scoping is used 
perl supports both the static and dynamic scoping 



