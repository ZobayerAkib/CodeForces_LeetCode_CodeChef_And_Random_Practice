#include<bits/stdc++.h>
using namespace std;

int main()
{
  
  string s;
  int T=0,D=0,C=0,O=0,I=0;
  int n;
  cin>>n;

  for (int i = 0; i < n; ++i)
  {
     cin>>s;
  
 

if(s[0]=='T')
   {
       T+=4;
       
   } 

if(s[0]=='C')
   {
    C+=6;
         
   }
if(s[0]=='O')
   {
      O+=8;
       
    }
if(s[0]=='D')
   {
      D+=12;
        
   }

if(s[0]=='I')
   {
    I+=20;   
   }
    
 
  }

  cout<<D+O+I+C+T<<endl;


}



// int32_t main(){
//  ios_base::sync_with_stdio(0);
// cin.tie(0);
// int t;cin>>t;

// while(t--) solve();
// }
//cltr+shift+b