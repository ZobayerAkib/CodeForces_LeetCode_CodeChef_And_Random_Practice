#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s,s1;
    int n,cnt=0;
    cin>>n>>s;
 
    for(int i=0;i<n;i++)
    {
        if(s[i]=='Q')
        {
            cnt++;
        }
        else cnt--;
        if(cnt<0)
    {
        cnt=0;
    }
        
    }
    if(cnt==0)
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