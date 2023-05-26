#include<bits/stdc++.h>
using namespace std;

void solve() {
   
    int n,cost = 1,current = 1,max_length  = 1;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            current++;
        } else {
             max_length = max(max_length, current);
            current= 1;
        }
    }

    max_length = max(max_length, current);
    cost = max_length + 1;

    cout << cost << endl;
      
}

int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int n;cin>>n;
while(n--) solve();

}