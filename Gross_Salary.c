#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f",&a);
    if(a<=10000)
   {
       c=a*0.8;
       d=a*0.2;
   }

        else if(a<=20000)
       {
           c=a*0.9;
           d=a*0.25;
       }
        else 
       {
           c=a*0.95;
           d=a*0.3;
       }
        b=a+c+d;
        printf("%0.2f",b);
       
       

}