//To print first N natural numbers
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter value of N:\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
