#include<stdio.h>
#include<cstring>
#include<math.h>
using namespace std;
#define sz 1000005
int a[sz];
bool mark[sz];
bool vis[sz];
int shakil[sz];
int p;
void sieve(int n)
{
    memset(mark,0,sizeof(mark));
    memset(vis,0,sizeof(vis));
    mark[1]=1;
    mark[0]=1;
    p=0;
    int i,j,k,d,b,v,m,c,sum,cnt=0,g;
    i=2;
    a[p++]=i;
    for(i=4; i<=n; i+=2)
        mark[i]=1;
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
    for(k=0; k<sz; k++)
    {
        sum=0;
        if(mark[k]==0)
        {
            m=k;
            g=k;
            while(m!=0)
            {
                v=m%10;
                sum=sum+v;
                m=m/10;
            }
            if(mark[sum]==0)
                cnt++;

        }
        shakil[k]=cnt;

    }
}
int main()
{
    sieve(1000003);
    int n,d,b,c,i;
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d%d",&d,&b);
        if(d>b)
        {
            c=d;
            d=b;
            b=c;

        }
        printf("%d\n",shakil[b]-shakil[d-1]);

    }
    return 0;
	
Shakill SHakil SHakil
Ashikul Islam Shakil SHakil SHakil 
}
