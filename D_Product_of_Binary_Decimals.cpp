#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const ll mod=1e9+7;

int main()
{   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios;
    ll maxSize = 1e5+2;
    vector < ll > comb,dp(maxSize,0);
    comb.pb(1);
    for(ll i = 0 ; i < comb.size(); i++) {
        if(comb[i]*10 > maxSize)
            break;
        comb.pb(comb[i]*10);
        comb.pb(comb[i]*10 + 1);
    }
    dp[1] = 1;
    for(ll i = 2; i < maxSize; i++) {
        for(ll j = 0 ; j < (ll)comb.size(); j++) {
            dp[i] |= (i%comb[j] == 0)?dp[i/comb[j]]:0;
        }
    }
    ll t;
    cin>>t;
    
    while(t--) {
        ll n;
        cin>>n;

        if(dp[n])
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;     
 }