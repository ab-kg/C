int a , b;

void print() {
    printf("%d %d" , a , b);
}

int func1(){
    int a , c;
    a = 0 ; b= 1 ; c = 2 ;
    return c;
}

void func2()
{
    int b ;
    a = 3 ; 
    b = 4 ;
    print();
}

int main()
{
    a = func1();
    func2();
}


// this program is a pure example of static scoping happenig in c
// here we get the output as 3 and 1 for a and b respectively
// its becuase b is assigned 1 as b value is taken from the global perspective 

