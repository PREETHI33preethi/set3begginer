#include <stdio.h>
int main()
{
    int N,a[100],i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<N;i++)
    {
        printf("\n%d%d",a[i],i);
    }
    return 0;
}
