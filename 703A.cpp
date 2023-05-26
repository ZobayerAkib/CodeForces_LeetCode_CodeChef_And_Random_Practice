#include<bits/stdc++.h>

using namespace std;

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    //while(t--) solve();
     int m,c,mm=0,cc=0,d;
    for(int i=0;i<t;i++)
    {
       
        cin>>m>>c;
        int m1=m;
        int c1=c;
        d=max(m,c);
        if(d==m1 ) 
            {
                mm++;
            }
        if(d==c1)
           { 

                cc++;
           } 
            

      
    }
    
    //cout<<mm<<" "<<cc<<endl;
       if(mm>cc) cout<<"Mishka"<<endl;
       else if (mm<cc) cout<<"Chris"<<endl;
       else cout<<"Friendship is magic!^^"<<endl;  
}