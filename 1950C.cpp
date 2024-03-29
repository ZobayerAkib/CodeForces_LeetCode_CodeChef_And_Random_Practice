#include<bits/stdc++.h>

using namespace std;


void solve() {
    
 int a,res[3];
 string s;
 cin>>s;
 std::vector<int> v;
 for (int i = 0; i < 2; ++i)
 {
    v.push_back(stoi(string(1, s[i])));

 }

 std::stringstream ss;
     for (int value : v) {
        ss << value;
    }

    std::string combined = ss.str();
    int combinedInt = std::stoi(combined);

   

    if(combinedInt>12&&combinedInt<22)
    {
       int result = abs(combinedInt - 12);
       cout<<"0"<<result<<s.substr(2,5)<<" PM"<<endl;
    }
    else if(combinedInt>=22&&combinedInt<=24)
    {
       int result = abs(combinedInt - 12);
       cout<<result<<s.substr(2,5)<<" PM"<<endl;
    }
    else if(combinedInt==00)
    {
      cout<<"12"<<s.substr(2,5)<<" AM"<<endl;
    }
    else if (combinedInt==12)
    {
       cout<<s<<" PM"<<endl;
    }
    else cout<<s<<" AM"<<endl;


}





int32_t main(){
 ios_base::sync_with_stdio(0);
cin.tie(0);
int t;cin>>t;

while(t--) solve();
}



// cltr+shift+b