#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int a[8],b[8],i=0,x=0,asum=0,bsum=0,digit=0,l;
    long n;
    n = get_long("Number:");


    while(n!=0)
    {


        a[i] = n%10;
        n=n/10;
        digit+=1;


        b[i] = n%10;
        n=n/10;
        i+=1;
        digit+=1;


    }

    digit-=1;

    for(i = 0; i < 8 ;i++)
    {
        asum = asum + a[i];

        b[i] = 2 * b[i];
        l = b[i];
        bsum = bsum+(l%10);
        l=l/10;
        bsum = bsum+l;
    }



        x = asum + bsum;



    if(x%10==0 && digit==15)
        printf("AMEX\n");
    else if(x%10==0 && digit==16)
        printf("MasterCard\n");
    else if(x%10==0 && digit==13)
        printf("Visa\n");
    else
     printf("Invalid\n");
}