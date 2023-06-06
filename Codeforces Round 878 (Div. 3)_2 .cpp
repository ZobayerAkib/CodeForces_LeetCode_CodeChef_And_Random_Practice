#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
 
 
void solve() {
   
    int n , k;
    cin>>n>>k;
  
  (log2(n)<k) ? cout<<n+1<<endl : cout<< (int)pow(2,k)<<endl;
 
  
}
 
 
   
 
int32_t main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    
   
  