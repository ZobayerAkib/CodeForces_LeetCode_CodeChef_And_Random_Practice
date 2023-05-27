#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int32_t solve( vector<int> v) {
   
    sort(v.begin(),v.end());
  unordered_map<int, int> count;
    for (int num : v) {
        if (count.find(num) != count.end()) {
            count[num] += 1;
        } else {
            count[num] = 1;
        }
    }

    for (const auto& pair : count) {
        if (pair.second >= 3) {
            return pair.first;
        }

    }
    return -1;
}
   
int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,result;
    cin>>t;
   
  
    while(t--) 
    {
         int n,a,c=0;
   cin>>n;
   vector<int> v;
   for (int i = 0; i < n; ++i)
   {
       cin>>a;
       v.push_back(a);
   }
        result=solve(v);
        cout<<result<<endl; 
    }
       
}