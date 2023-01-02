#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int sum=0;
    string a,b;
    string s;
    cin>>s;
    for(char i='0';i<='9';i++)
    {
        if(i==s[0])
        {
            a=i;
        }
        if(s[2]==i)
        {
            b=i;
        }
    }
    sum=stoi(a)+stoi(b);
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}