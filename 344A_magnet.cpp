#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,a,count=0;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        cin>>a;
        v.push_back(a);

    }
    for (int i = 0; i < v.size(); ++i)
    {
        if(v[i]!=v[i+1]){
            
           
            count++;
            
        }
      
    }
    cout<<count<<endl;
}


int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
//int n;cin>>n;
//while(n--) "YES"
     
    solve();

}