#include<stdio.h>
void natural(int n)
{
    if(n==0)
    return;
    natural(n-1);
    printf("%d\n",n);
    }
int main()
{
    int n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("The naturals numbers from 1 to %d are\n",n);
    natural(n);
    return 0;
}
