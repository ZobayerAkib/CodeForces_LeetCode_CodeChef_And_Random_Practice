#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    vector<int> v;
    cin>>a>>b>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    (v[0]+v[1]==v[2]) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();

}