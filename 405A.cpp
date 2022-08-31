#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,x;
    cin>>n;
    vector<int>a;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(auto i=a.begin();i!=a.end();i++)
    {
        cout<<*i ;
        cout<<" ";
    }
    
}