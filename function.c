#include<stdio.h>

int sum(int num1, int num2)
{
    int ans = num1 + num2;

    return ans;
}

int main()
{
    int ans = sum(10,5);
    printf("%d", ans);
}