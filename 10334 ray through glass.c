#include<stdio.h>
int main()
{
    long long int a,n,i,b,c;

    while(scanf("%lld",&n)==1)
    {
        b=1;
        a=0;
        for(i=0; i<=n; i++)
        {

            c=a+b;

            a=b;
            b=c;

        }
        printf("%lld\n",c);
    }
    return 0;

}



