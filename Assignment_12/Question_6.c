#include<stdio.h>
int even(int n)
{
    if(n>0)
    {
        printf("%d\n",2*n);
        even(n-1);
    }
    else
    {
        return;
    }
}
int main()
{
    int n;
    printf("Enter a number\n");;
    scanf("%d",&n);
    printf("EVEN numbers in orders are\n");
    even(n);
}
