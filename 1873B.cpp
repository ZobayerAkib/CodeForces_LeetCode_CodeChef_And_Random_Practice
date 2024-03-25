#include<bits/stdc++.h>

using namespace std;


void solve() {
    
   int n,res=1;
   cin>>n;
   int arr[9];
   for (int i = 0; i < n; ++i)
   {
      cin>>arr[i];
   }

   sort(arr,arr+n);

   arr[0]=arr[0]+1;

   for (int i = 0; i < n; ++i)
   {
      res*=arr[i];
   }

   cout<<res<<endl;
  
}





int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;

while(t--) solve();
}