#include<bits/stdc++.h>
typedef long long int LL;
using namespace std;

void solve() {
    
    int n,h,a,sum=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        (a>h)?sum+=2:sum+=1;
    }
    cout<<sum<<endl;

}

int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
//int n;cin>>n;
//while(n--) "YES"
    solve();

}