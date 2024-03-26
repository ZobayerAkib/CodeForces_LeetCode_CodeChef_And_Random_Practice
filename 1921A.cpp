#include<bits/stdc++.h>

using namespace std;


void solve() {
    
   int x[5],y[5],res=0;

   for (int i = 0; i < 4; ++i)
   {
      cin>>x[i]>>y[i];

   }

  res= * max_element(x,x+4)- * min_element(x,x+4);

   cout<<res*res<<endl;
}



int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;

while(t--) solve();
}



// cltr+shift+b