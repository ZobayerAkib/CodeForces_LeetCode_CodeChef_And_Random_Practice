#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
 
 
void solve() {
   
    int n;
    string s,s1;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        s1.push_back(s[i]);
        int j=i+1;
        while(j<n-1 && s[j]!=s[i])
        {
            j++;
        }
        i=j;
    }
  cout<<s1<<endl;
 
  
}
 
int32_t main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    
   
        
}
