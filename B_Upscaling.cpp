#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int m = 2*n;
    int ans = true;
    vector<vector<char>>v(m,vector<char>(m));
    for(int i=0;i<m;i+=2){
        for(int j=0;j<m;j+=2){
            if(ans==true){
                v[i][j]='#';
                v[i][j+1]='#';
                v[i+1][j]='#';
                v[i+1][j+1]='#';
            }
            else{
                v[i][j]='.';
                v[i][j+1]='.';
                v[i+1][j]='.';
                v[i+1][j+1]='.';
            }
          if(ans==true) ans = false;
        else ans =true;

            }
            if(n%2==0){
                if(ans==true) ans = false;
        else ans =true;

            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                cout<<v[i][j];
            }
            cout<<endl;
        }

    }

    signed main()
    {
        int t;
        cin>>t;
        while(t--){
             solve();
        }
    }
