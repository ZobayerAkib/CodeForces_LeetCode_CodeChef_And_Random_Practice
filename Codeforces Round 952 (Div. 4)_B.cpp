
#include<bits/stdc++.h>
using namespace std;

int solve()
{

        int n;
        vector<int> results;
        cin >> n;
        
        int max_sum = 0;
        int optimal_x = 2;
        
        for (int x = 2; x <= n; ++x) {
            int k = n / x;
            int sum = x * (k * (k + 1)) / 2;
            
            if (sum > max_sum) {
                max_sum = sum;
                optimal_x = x;
            }
        }
        
        results.push_back(optimal_x);
    
    
    for (int n : results) {
        cout << n << endl;
    }
    
    return 0;
}



int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;
while(t--) solve();
}



