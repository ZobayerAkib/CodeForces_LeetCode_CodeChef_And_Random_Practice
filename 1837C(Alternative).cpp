#include<bits/stdc++.h>
using namespace std;

void solve() {
   
    
    string s;
    cin>>s;
    char l ='0';
    for(auto &it:s)
    {
        if(it=='?')
        {
            it=l;
        }
        l=it;
    }
    cout<<s<<endl;

}

int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int n;cin>>n;
while(n--) solve();

}