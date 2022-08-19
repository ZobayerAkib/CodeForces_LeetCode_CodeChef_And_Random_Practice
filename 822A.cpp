#include<bits/stdc++.h>
using namespace std;


void solve(int A,int B)
{
   int i=0,ans=1;

   int m=min(A,B);
   for(i=1;i<=m;i++)
   {
       ans*=i;
   }
   cout<<ans<<endl;
}

int main()
{
    int A,B;
    cin>>A>>B;
    solve(A,B);
}
