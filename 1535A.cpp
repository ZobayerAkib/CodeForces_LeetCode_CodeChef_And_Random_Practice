#include<bits/stdc++.h>
using namespace std;


void solve()
{
   int ar[4],i=0;
   for(i=0;i<4;i++)
   {
       cin>>ar[i];

   }
  if(max(ar[0],ar[1])<min(ar[2],ar[3])||min(ar[0],ar[1])>max(ar[2],ar[3]))
  {
      cout<<"NO"<<endl;

  }
  else cout<<"YES"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
