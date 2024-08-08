#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

int solve()
{
    int n,rem=0,sum=0;
    cin>>n;
    while(n!=0)
    {
        
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
	
    cout<<sum<<endl;
}
int32_t main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
    
}