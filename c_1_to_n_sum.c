#include<stdio.h>

int main()
{
    int num;
    printf("Enter an integer number : ");
    scanf("%d", &num);
    int sum=0;
    
    for(int i=1; i<=num; i++)
    {
        sum = sum + i;
    }
    printf("Summation = %d", sum);

    return 0;
}