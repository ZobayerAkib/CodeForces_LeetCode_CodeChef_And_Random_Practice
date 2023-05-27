#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;


void ssolve() {
   
    int p,q,n,count=0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>p>>q;
       
        if((q-p)>=2) 
        {

            count++;
        }
        

    }
    (count>0) ? cout<<count<<endl : cout<<0<<endl;
 
}
   

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //int t,result;
    //cin>>t;
    //while(t--) 
        solve();
   
        
}