//To print N even natural numbers
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter value of N:\n");
    scanf("%d",&N);
    for(i=0;i<=(2*N)-2;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}
