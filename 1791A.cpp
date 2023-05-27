#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

void solve() {
    char c;
    string s="codeforces";
    cin >> c;
    for (char i : s) {
        if (i == c) {yes ; return;}
    }
    cout << "NO\n";
}
   

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
  
}