#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,k;
    cin>>x>>k;
    if(x%k!=0){
        cout<<1<<endl;
        cout<<x<<endl;
    }
        
    else{
        cout<<2<<endl;
        cout<<1<<' '<<x-1<<endl;
    }    
}

int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int n;cin>>n;
while(n--) solve();

}