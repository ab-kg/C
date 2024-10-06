// no const , no privat , no class , no public 

typedef struct {
    int *elemS;
    int logicalLength ;
    int allocLength;
}stack ;

void stackNew(stack *s );

void stackDispose(stack *s);

void stackPush(stack *s , int value);

int stackPop(stack *s );

