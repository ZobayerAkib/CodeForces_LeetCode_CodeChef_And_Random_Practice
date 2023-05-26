#include<bits/stdc++.h>
using namespace std;

void solve() {
    
    int n;
    string str;
    cin>>n>>str;
    int count = 0;
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        }
    }
    cout<<count<<endl;

}

int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
//int n;cin>>n;
//while(n--) 
    solve();

}