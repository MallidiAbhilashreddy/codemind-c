#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-2;j++)
        {
                printf("%d",j);
        }
        for(int k=1;k<n-2;k++)
        {
            printf("%d",k);
        }
        printf("
");
    }
}