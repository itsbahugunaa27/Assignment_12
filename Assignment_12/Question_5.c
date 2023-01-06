#include<stdio.h>
int even(int n)
{
    if(n>0)
    {
        even(n-1);
        printf("%d\n",2*n);
    }
    else
    {
        return ;
    }
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("EVEN numbers are\n");
    even(n);
    return 0;
}
