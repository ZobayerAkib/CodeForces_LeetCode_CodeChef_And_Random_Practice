#include<bits/stdc++.h>

using namespace std;

void solve() {   
    long long int n;
    int flag=0,p;
    cin>>n;
    vector<int>v;
    
    for(int i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }
  
for(int j=0;j<n;j++){

        if(v[j]==1)
        {
            flag=1;
            break;
        }
        
    }
  
   
    (flag==1)?cout<<"Hard"<<endl:cout<<"EASY"<<endl;

}

int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
//int n;cin>>n;
//while(n--) "YES"
    solve();

}