#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;


void solve() {
   
  int n, k, q;
        cin >> n >> k >> q;

        vector<int> V;
        int count = 0;

        for (int i = 0; i < n; i++) {
            int temP;
            cin >> temP;

            if (temP <= q) {
                count++;
                if (i == n - 1)
                    V.push_back(count);
            } else {
                V.push_back(count);
                count = 0;
            }
        }

        long long ans = 0;

        for (int i = 0; i < V.size(); i++) {
            int c = V[i];

            for (int j = 1; j <= c; j++) {
                int p = j + k - 1;
                if (p <= c) {
                    long long w = c - p + 1;
                    ans += w;
                }
            }
        }
        cout << ans << endl;
    }


  



   

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    
   
        
}