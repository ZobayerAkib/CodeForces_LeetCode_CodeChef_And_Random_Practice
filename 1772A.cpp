#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s,s1,s2;
    int n;
    cin>>n>>s;
    s1="Timru";
    sort(s.begin(),s.end());
    
   
    
    
   if(s==s1)
   {
       cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl; 
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}