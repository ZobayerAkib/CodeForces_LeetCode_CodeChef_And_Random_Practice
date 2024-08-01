#include<bits/stdc++.h>
using namespace std;

int solve()
{
	int n;
	cin>>n;
	
	(n%4==0) ? cout<<n/4<<endl : cout<<(n/4)+1<<endl ;

}
int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
while(t--) solve();
}