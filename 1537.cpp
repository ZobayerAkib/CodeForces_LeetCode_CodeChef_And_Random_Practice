#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; int sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    if(sum<n)
    {
        cout<<1<<endl;
    }
    else
        cout<<sum-n<<endl;



}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

