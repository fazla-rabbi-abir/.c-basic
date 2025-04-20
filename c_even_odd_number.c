//Take a number from user and check if its a even number or odd number.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter an integer number : ");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("The number is even number");
    }
    else
    {
        printf("The number is odd number");
    }
}
