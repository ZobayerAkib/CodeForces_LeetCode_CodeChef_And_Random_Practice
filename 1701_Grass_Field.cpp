#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int i,j,a[2][2],c=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j]==1)
            {
              c++;
            }
        }
    }
    if(c>1)
     cout<<(c/2)<<endl;
    else
        cout<<c<<endl;


}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
