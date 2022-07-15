#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i,j,k,S=0,total=0,SUM=0;
    cin>>n;
    string s;
    cin>>s;
    for(char i='A';i<='Z';i++)
    {
        total=count(s.begin(),s.end(),i);
        //cout<<total<<endl;
        if(total>1)
        {
            SUM+=total+1;
        }
        else
            S+=(2*total);
    }
    int sum=S+SUM;
    cout<<sum<<endl;;
}


int main()
{
    int t;
    cin>>t;
    while(t--) solve();

}
