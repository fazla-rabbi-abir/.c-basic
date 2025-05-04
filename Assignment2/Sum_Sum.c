#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int V=0, pos=0, neg=0;
    for(int i=1; i<=N; i++)
    {
        scanf("%d ", &V);
        if (V>0) 
        {
            pos += V;
        } 
        else if (V<0) 
        {
            neg += V;
        }
    }

    printf("%d %d\n", pos, neg);

    return 0;
}
