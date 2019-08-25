#include <bits/stdc++.h>

long long mod = 1000000007;

long long power(long long x, long long y, long long p)
{
    long long res = 1;

    x = x % p;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    int  n,i;
    std::cin>>n;
    int a,co=0,ce=0;
    for(i=0;i<n;i++)
    {
        std::cin>>a;
        if(a%2==0)
            ce++;
        else
            co++;
    }
    if(co!=0)
      std::cout<<(power(2,n-1,mod) - 1)%mod<<std::endl;
    else
        std::cout<<(power(2,n,mod) - 1)%mod<<std::endl;

    return 0;
}
