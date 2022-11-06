//To print first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter value of N:\n");
    scanf("%d",&N);
    for(i=(2*N)-2;i>=0;i=i-2)
    {
        printf("%d\n",i);
    }
    return 0;
}
