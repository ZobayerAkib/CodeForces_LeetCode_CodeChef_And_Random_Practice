#include<bits/stdc++.h>
using namespace std;

void solve(int a , int b)
{

    if(a>b)
    {
        cout<<b<<" "<<((a-b)/2)<<endl;
    }
    else
        cout<<a<<" "<<((b-a)/2)<<endl;
}


int main()
{
    int a,b;
    cin>>a>>b;
    solve(a,b);
}
