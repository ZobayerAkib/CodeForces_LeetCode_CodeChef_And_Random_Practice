#include<bits/stdc++.h>
using namespace std;

void solve(int n , string s)
{
    string s1="L";
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s1[0])
        {
            c++;
        }
    }
    cout<<c/6<<endl;

}



int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    solve(n,s);
}


