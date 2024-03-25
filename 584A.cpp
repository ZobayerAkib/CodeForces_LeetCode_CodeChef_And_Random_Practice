#include<bits/stdc++.h>

using namespace std;


int main() {
    
   int n,t;
   cin>>n>>t;

   vector<int>res;

   for (int i = 0; i < n; ++i)
   {
      res.push_back(t);
   }
  
  

   if(n==1 && t==10) cout<<-1<<endl;

   else if(t==10){
         for (int i = 1; i < n; ++i)
         {
            cout<<"1";
         }
         cout<<"0";
   }
   else{
       for(auto x:res) cout<<x ;
   }

}