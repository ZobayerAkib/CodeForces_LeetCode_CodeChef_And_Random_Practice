#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){

       int w,h,n,flag=1;

       cin>>w>>h>>n;

       while(w%2==0)
       {
           w=(w/2);
           flag=flag*2;


       }
        while(h%2==0)
       {
           h=(h/2);
           flag=flag*2;


       }
     if(flag>=n){
        cout<<"YES"<<endl;
     }

     else
       cout<<"NO"<<endl;




    }
}


