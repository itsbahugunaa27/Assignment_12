#include<stdio.h>
void print(int a)
{
    if(a==0)
    return;
    printf("%d\n",a);
    print(a-1);
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The naturals number in reverse order from %d to 1 are\n",n);
    print(n);
}
