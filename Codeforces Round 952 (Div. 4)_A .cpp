
#include<bits/stdc++.h>
using namespace std;

int solve()
{

        string a, b, s,s1;
        cin >> a >> b;
        
        
        s = b[0] + a.substr(1, 2);
        s1 = a[0] + b.substr(1, 2);
        
        
        cout << s << " " << s1 << endl;

    
    return 0;
}



int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
while(t--) solve();
}