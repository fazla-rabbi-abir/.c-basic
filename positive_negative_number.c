//Take a number from user and check if its a positive or negative number.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter an integere number : ");
    scanf("%d", &num);

    if(num>0)
    {
        printf("The number is positive.");
    }
    else
    {
        printf("The number is negative.");
    }

    return 0;
}