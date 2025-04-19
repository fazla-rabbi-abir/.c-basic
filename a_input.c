//Take 2 numbers from the user and then print the 2nd number first and then first number. 

#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two integer value : ");
    scanf("%d %d", &num1, &num2);

    printf("The numbers are : %d %d", num2, num1);

    return 0;
}