#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i,a,sum=0;
        cin>>n;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());

        int min=v[0];
       for(i=0;i<n;i++)
       {
            sum+=(v[i]-min);
       }
       cout<<sum<<endl;
    }

}
