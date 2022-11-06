//To print first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter value of N:\n");
    scanf("%d",&N);
    for(i=1;i<=2*N;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}
