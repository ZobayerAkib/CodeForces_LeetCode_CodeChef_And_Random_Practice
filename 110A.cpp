#include<bits/stdc++.h>
typedef long long int LL;
using namespace std;

void solve() {
    
    string s;
    int count =0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4' || s[i]=='7'){

            count++;
        }
        
    }
  
    (count==4 || count == 7)? cout<<"YES"<<endl:cout<<"NO"<<endl;

}

int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
//int n;cin>>n;
//while(n--) "YES"
    solve();

}