#include<stdio.h>

int main()
{
    int num1;
    int num2;
    printf("Enter two integer value : ");
    scanf("%d %d" , &num1, &num2);
//addition
    int add = num1 + num2; 
    printf("Addition = %d\n", add);
//subtraction
    int sub = num1 - num2;
    printf("Subtraction = %d\n", sub);
//multiplication
    int mul = num1 * num2;
    printf("Multiplication = %d\n", mul);
//division
    int div = num1 / num2;
    printf("Division = %d\n", div);
//modulus
    float mod = num1 % num2;
    printf("Modulus = %f\n", mod);

    return 0;
}