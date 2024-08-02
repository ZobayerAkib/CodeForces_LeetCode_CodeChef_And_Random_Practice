#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;



ll solve()
{
	ll n,largestSum=INT_MIN,cs=0;
	
	cin>>n;
	
	vector<ll>x(n);
	unordered_set<ll>y;
	loop(n)
	{
	    cin>>x[i];
	}
	
	loop(n)
	{
	    ll largestSum=INT_MIN,cs=0;
	    for(int j=i;j<n;j++)
	    {
	        cs+=x[j];
	        largestSum=max(largestSum,cs);
	    
	       if(cs<0) cs=0;
	        y.insert(largestSum);
	    }
	    
	   
	    
	}
	ll totalSum=0;
	for(auto i:y) totalSum+=i;
	
    cout<<totalSum<<endl;
    
}


int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
//int t;cin>>t;
//while(t--) 
    solve();
}