//To print a table of N
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter value of N:\n");
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",N*i);
    }
    return 0;
}
