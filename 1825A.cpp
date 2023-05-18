#include<bits/stdc++.h>
using namespace std;
bool allCharactersSame(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;
 
    return true;
}
void solve()
{
    string s;
    int flag=0;
    cin>>s;
    string rev = string(s.rbegin(), s.rend());
    int f=s.compare(rev); 
    
    for(int i=0;i<s.length();i++)
    {
        if((rev[i]==s[i]))
        {
            flag++;
            break;
        }
            
    }
    if(flag=s.length()&& !allCharactersSame(s)) cout<<s.length()-1<<endl;
    else cout<<"-1"<<endl;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
