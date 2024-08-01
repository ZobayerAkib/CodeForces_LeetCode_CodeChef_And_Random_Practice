#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll kadensAlgo(vector<ll>& arr) {
    ll n = arr.size(); 
    ll largestA = INT_MIN, csA = 0;
    for (int i = 0; i < n; i++) {
        csA += arr[i];
        largestA = max(largestA, csA);
        if (csA < 0) csA = 0;
    }
    return largestA;
}

ll solve() {
    ll n, m;
    cin >> n;
    vector<ll> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> m;
    vector<ll> B(m),C(m); 
    for (int i = 0; i < m; i++) {
        cin >> B[i];
        if(B[i]>0) C.push_back(B[i]);
    }

    ll x = kadensAlgo(A);
    ll y = kadensAlgo(C);
    ll total = max(x, y);
    ll total2 = max(total, x + y);
    cout << total2 << endl;

    return 0;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) solve();
}
