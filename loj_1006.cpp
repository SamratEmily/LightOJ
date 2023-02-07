#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll dp[10005];

ll a, b, c, d, e, f;
ll fn() {
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    dp[4]=4;
    dp[5]=5;
    for(ll i =6; i <= 10004; i++)
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6];

    return;
}
int main() {
    fn();
    ll n, cases;
    scanf("%lld", &cases);
    for (ll caseno = 1; caseno <= cases; ++caseno) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", caseno, (fn(n)+10000007) % 10000007);
    }
    return 0;
}
