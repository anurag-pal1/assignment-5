//To print first N odd natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,N,p;
    printf("Enter value of N:\n");
    scanf("%d",&N);
    p=2*N;
    if(p%2==0)
    {
        for(i=p-1;i>=1;i=i-2)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        for(i=p;i>=1;i=i-2)
        {
            printf("%d\n",i);
        }
    }





    return 0;
}
