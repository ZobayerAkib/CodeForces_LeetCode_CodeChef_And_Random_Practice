#include<bits/stdc++.h>

using namespace std;


void solve() {
    
  int a , b ,c;
  cin>>a>>b>>c;
  if(a<b&&b<c) cout<<"STAIR"<<endl;
  else if(a<b&&b>c) cout<< "PEAK" <<endl;
  else cout<<"NONE"<<endl;
}


int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;

while(t--) solve();
}



// cltr+shift+b