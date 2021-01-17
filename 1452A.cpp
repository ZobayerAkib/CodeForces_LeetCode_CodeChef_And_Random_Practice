#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){


    int x, y,ans=0;
     cin >> x >> y;
     if(x>=y)
     {
      ans=x* 2 - 1;
     if(x==y){
     ans++;
     }
     cout<<ans<<endl;

     }
     else{
        ans=y*2-1;

        cout<<ans<<endl;
     }


    }
}
