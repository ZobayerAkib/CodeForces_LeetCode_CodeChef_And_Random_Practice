#include<bits/stdc++.h>
#define trav(it, a) for (auto &it : a)
#define p(x) cout << x << '\n'
using namespace std;


void solve(){

  

    string s;
    cin >> s;
    
    char k = '0';
    
    trav (it, s)
    {
        if (it == '?')
            it = k;
            
        else
            k = it;
    }
    
  p(s);
}
 
    
    






int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--) solve();



}