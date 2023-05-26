#include<bits/stdc++.h>

using namespace std;

// void printPermutations(vector<int>& sequence) {
//     sort(sequence.begin(), sequence.end());

//     do {
//         for (int num : sequence) {
//             cout << num << " ";
//         }
//         cout << endl;
//     } while (next_permutation(sequence.begin(), sequence.end()));
// }

void solve(){
    int n,a;
    cin>>n;
    vector<int>v(n+1);
    
    for (int i = 1; i <=n; ++i)
    {
        
        cin>>a;
        v[a]=i;
    }

    cout<<v[1];
    for(int i=2;i<=n;i++){
        cout<<" "<<v[i];
    }

}


int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
//int n;cin>>n;
//while(n--) "YES"
     
    solve();

}