#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin>>s>>s1;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
   //Compare two strings lexicographically
    int k=s.compare(s1);
    if(k==0) cout<<0<<endl;
    else if(k>0) cout<<1<<endl;
    else cout<<-1<<endl;
    return 0;
}