#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    int c=0;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << (s == "YES" ? "YES" : "NO") << '\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
