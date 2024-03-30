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
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        string s;
        cin>>n;
        cin>>s;
        ll diffCnt = 0;
        for(ll len = 1; len <= n ; len++) {
            if(n%len == 0) {
                diffCnt = 0;
                for(ll preIdx = 0; preIdx < len; preIdx++) {
                    for(ll otherIdx = preIdx+len; otherIdx < n; otherIdx+=len) {
                        if(s[preIdx]!=s[otherIdx]) {
                            diffCnt++;
                        }
                    }
                }
                if(diffCnt <= 1) {
                    cout<<len;
                    break;
                }
                diffCnt = 0;
                for(ll sufIdx = n-len; sufIdx < n; sufIdx++) {
                    for(ll otherIdx = sufIdx-len; otherIdx >= 0; otherIdx-=len) {
                        if(s[sufIdx]!=s[otherIdx])
                            diffCnt++;
                    }
                }
                if(diffCnt <= 1) {
                    cout<<len;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;     
 }