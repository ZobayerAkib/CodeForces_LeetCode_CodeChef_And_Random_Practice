#include<bits/stdc++.h>

using namespace std;

void solve(){
    
    int a , b , c , d ,count=0,i;
    vector<int>v;
    cin>>a>>b>>c>>d;
    v.push_back(a); 
    v.push_back(b);
    v.push_back(c); 
    v.push_back(d);

    for (i = 1; i < v.size(); ++i)
    {
        if(v[0]<v[i]) count++;

    }

    cout<<count<<endl;

   }


int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) 
    solve();
  
}