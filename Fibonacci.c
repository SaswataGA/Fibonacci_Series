#include<stdio.h>
int main ()
{

    int I,N,Previous,Current,Next;
    Previous=0;
    Current=1;
    Next=Previous+Current;
    printf("Enter the Number of terms: ");
    scanf("%d",&N);
    printf("Fibonacci Series with %d terms : %d,%d",N,Previous,Current);
    for(I=0; I<=N; I++)
    {

        printf(",%d",Next);
        Previous=Current;
        Current=Next;
        Next=Previous+Current;

    }
    printf("\n");
    return 0;
}
