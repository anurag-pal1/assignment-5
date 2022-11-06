//To print first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter value of N:\n");
    scanf("%d",&N);
    for(i=N;i>0;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
