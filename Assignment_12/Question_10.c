#include<stdio.h>
void reverse(int n)
{
    if(n==0)
    return ;
    printf("%d",n%10);
    reverse(n/10);
}
int main()
{
    int n;
    printf("Enter a number to find reverse\n");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
