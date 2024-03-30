#include<bits/stdc++.h>
using namespace std;


void solve() { 

string rat;

cin>>rat;

string a;

a+=rat[0];

a+=rat[1];

if(a=="00"){

    rat[0]='1';

    rat[1]='2';

    cout<<rat<<" "<<"AM"<<"\n";

}

else if(stoi(a)>=12){

    if(stoi(a)==12){

        cout<<rat<<" "<<"PM"<<"\n";

        return ;

    }else{

    int x=stoi(a)-12;

    if(x<10){

        cout<<0<<x<<":"<<rat[3]<<rat[4]<<" "<<"PM"<<"\n";

        return ;

    }

    cout<<x<<":"<<rat[3]<<rat[4]<<" "<<"PM"<<"\n";

    return ;

}

}



else{

    cout<<rat<<" "<<"AM"<<"\n";

}



}

int main() {

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin >> t;

    while (t--) {

        solve();

    }

    return 0;

}
