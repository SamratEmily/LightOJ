#include<bits/stdc++.h>

//-----------------------------------------------------------------------------------
#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define all(v)          v.begin(),v.end()
#define vi              vector<int>
#define vl              vector<ll>
#define vii             vector<vector<int> >
#define vll             vector<vector<ll> >
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)  (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define pb              push_back
#define pf              printf
#define sc              scanf
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define mp              make_pair
#define mset(a,b)       memset(a,b,sizeof(a))
#define lo_case(st)     transform(st.begin() , st.end() , st.begin(),::tolower )
#define up_case(st)     transform(st.begin() , st.end() , st.begin(),::toupper )
#define gcd             __gcd
#define lcm(a,b)        (a*(b/__gcd(a,b)))

//--------------------   Constant  --------------------------------------------------
#define intMX           2147483648
#define longINF         9223372036854775808
#define infinity        (1<<28)
#define MOD             1000000007
#define PI              2*acos(0.0)

//-------------------------------------------------------------------------------------
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)

using namespace std;

#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


//string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}

//ll frequency(ll n,ll factor)/** Frequency of a factor in n! **/{ll cnt=0;while(n){cnt += (n/factor);n /= factor;}return cnt;}


//ll per[2000006];
//void factorial(){per[0] = 1;for(ll i = 1; i  <= 2000000 + 2; i++) per[i] = ((per[i-1] % MOD ) * (i%MOD) ) % MOD;}
//ll BigMod(ll a,ll b){if(b == 0)return 1%MOD;else if(b%2 == 0){ll temp=BigMod(a,b/2);return ((temp%MOD)*(temp%MOD))%MOD;}else{return ((a%MOD)*BigMod(a,b-1)%MOD)%MOD;}}
//ll nCr(ll n , ll r){ll temp = (per[r] * per[n-r]) % MOD;ll ans = (per[n] * BigMod(temp , MOD-2)) % MOD;return ans;}

//ll Bin_Search(ll ara[], ll n, ll k){ll l=0,h=n-1,mid,ans=0;while(l<=h){mid=(l+h)/2;if(ara[mid]>=k){h=mid-1;ans=mid;}else l=mid+1; }return ans;}
//bool cmp(int a, int b){return a > b;}

/*
struct Point
{
    ll x , y;
};

bool operator<(Point A, Point B )
{
    if(A.x != B.x )
        return A.x < B.x ;
    return A.y < B.y  ;
}
*/

vector<ll>Prime;
bool mark[10000003];
void sieve(ll n)
{
    ll i,j;
    mark[1]=1;
    for(i=4; i<=n; i+=2)mark[i]=1;
    Prime.push_back(2);
    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            Prime.push_back(i);
            if(i*i<=n)
            {
                for(j=i*i; j<=n; j+=(i*2))mark[j]=1;
            }
        }
    }
}

ll nFact;
ll Primefactorize(ll n)
{
    ll ans = 1;
    for(ll i=0; i<Prime.size() && Prime[i]*Prime[i]<=n; i++)
    {
        if(n%Prime[i] == 0)
        {
            while(n%Prime[i] == 0)
            {
                nFact++;
                n/=Prime[i];
            }
        }
        ans *= (nFact + 1);
        nFact = 0;

    }
    if(n>1)
    {
        nFact++;
    }

    ans *= (nFact + 1);


    return (ans-1);
}


int main()
{
    sieve(1000006);
    int t,T = 1;
    scin(T);

    RUN_CASE(t,T)
    {
        nFact = 0;
        ll n;
        scln(n);

        pf("Case %d: %lld\n" , t , Primefactorize(n));
    }

    return 0;
}


