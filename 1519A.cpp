#include<bits/stdc++.h>
using namespace std;

int solve()
{
   int r,b,d;
   cin>>r>>b>>d;
   int m=min(r,b);
  if(((abs(r-b)+m-1)/m)<=d) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;

}



int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;

while(t--) solve();
}