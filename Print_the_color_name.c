#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='V')
    printf("Voilet");
    else if(a=='I')
    printf("Indigo");
    else if(a=='G')
    printf("Green");
    else if(a=='Y')
    printf("Yellow");
    else if(a=='O')
    printf("Orange");
    else if(a=='R')
    printf("Red");
    else
    printf("-1");
}