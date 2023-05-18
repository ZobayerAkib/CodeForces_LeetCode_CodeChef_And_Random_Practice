#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,even=0,odd=0;
    cin>>n;
   
    for(int j=0;j<n;j++)
    {
        cin>>a;
        if(a%2==0)
        {
           
                 even+=a;
            
        }
        else
        {
           odd+=a;
        }
    }
    
   if(even>odd) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
     
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}