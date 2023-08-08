#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define intMX           2147483648
#define longINF         9223372036854775808
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define all(v)          v.begin(),v.end()
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;
int main()
{
    ll tc;
    scln(tc);

    for(ll i = 1; i <= tc ; i++)
    {
        ll n;
        scln(n);
        if(n % 2)
        {
            printf("Case %lld: Impossible\n",i);
            continue;
        }


        ll odd = n/2, even = 2;

        while((odd % 2 == 0))
        {
            odd = odd / 2;
            even  = even * 2;
        }

        printf("Case %lld: %lld %lld\n", i, odd, even );
    }

    return 0;
}

