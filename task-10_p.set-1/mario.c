#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int i,j,n,k;
    n = get_int("Height:");
    n=n+1;
    if(n >=1 && n <=24)
    {
        for(i = n; i >= 1; i--)
        {
            for(j = 1; j < i; j++)
            printf(" ");
            for(k = (n-i); k >0 ; k--)
            printf("#");

            printf("  ");

            for(k = (n-i); k >0 ; k--)
            printf("#");

            printf("\n");
        }
    }

}