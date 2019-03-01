#include<cstdio>
#include<iostream>
#define sz 20000001

using namespace std;
bool mark[sz];
int a[sz],p,m[sz];
void sieve( int n)
{
    int i,j;

    i=2;
    a[p++]=i;
    for(j=i*i; j<=n; j+=i)
        mark[j]=1;
    for(i=3; i<=n; i+=2)
    {
        if(mark[i]==0)
        {
            a[p++]=i;
            if(i<=n/i)
                for(j=i*i; j<=n; j+=i+i)
                    mark[j]=1;
        }
    }
}
int main()
{

    int i,k=1,v;
    sieve(sz);
    for(i=0; i<p; i++)
    {
        if (a[i+1]-a[i]==2)
        {


                m[k++]=a[i];

        }
    }
    while(scanf("%d",&v)==1)

        printf("(%d, %d)\n",m[v],m[v]+2);
    return 0;
	
	SHakil SHakil Shakil sssss 
}
