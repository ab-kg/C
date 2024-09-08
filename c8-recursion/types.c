// four types
// direct 
// indirect
// tail
// non-tail


//1. Direct Recursive
// fn calls the same fn again

// fn()
// {
//     fn();
//     // some code 
// }


//2. Indirect Recursion
// fn calls fn2 and fn2 calls fn directly or indirectly


/*

fn2()
{
    fn();

}

fn()
{
    fn2();
}

*/

// WAP print from 1 to 10  , odd = +1 , even = -1

void odd();
void even();
int n =1 ;

void odd()
{
    if(n <= 10)
    {
        printf("%d" , n+1);
        n++;
        even();
    }
    return ;
}

void even()
{
    if(n<=10)
    {
        printf("%d" , n-1);
        n++;
        odd();
    }
    return ;
}

int main()
{
    odd();
}



