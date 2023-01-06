#include<stdio.h>
int square(int n)
{
    if(n>0)
    {
        square(n-1);
        printf("%d\n",n*n);
    }
    else
    {
        return;
    }
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("SQUARES of 1 to %d numbers are\n",n);
    square(n);
    return 0;
}
