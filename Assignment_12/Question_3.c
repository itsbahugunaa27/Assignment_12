#include<stdio.h>
void odd(int n)
{
    if(n>0)
    {
	odd(n-1);
    printf("%d\n",2*n-1);
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
    printf("The ODD numbers are\n");
    odd(n);
    return 0;
}
