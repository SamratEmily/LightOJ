#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf
#define scln(x)         scanf("%lld",&(x))
#define pll             pair < ll, ll>
#define MP              make_pair
#define gcd(a,b)        __gcd(a , b)
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define intMX           __builtin_infd32()
#define Vout(v)         for(auto it: v)cout<<it<<' '; cout<<endl;
#define Vin(v)          for(auto &it: v)cin>>it;

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    cin >> tc;
    ll T = tc;
    while(tc--)
    {
        ll n;
        cin >> n;
        string st;
        cin >> st;

        ll r = n%3;

        if(st == "Alice")
        {
            if(r == 1) printf("Case %lld: Bob\n",T-tc);
            else printf("Case %lld: Alice\n",T-tc);
        }
        else
        {

            if(r != 0) printf("Case %lld: Bob\n",T-tc);
            else printf("Case %lld: Alice\n",T-tc);
        }


    }
    return 0;
}


