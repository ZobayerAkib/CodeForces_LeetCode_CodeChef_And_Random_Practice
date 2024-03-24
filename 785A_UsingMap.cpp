#include<bits/stdc++.h>
using namespace std;

int main()
{
  
  string s;
  int n;
  cin>>n;
  int r=0;
  map<char,int>geo;

  geo['T']=4;
  geo['C']=6;
  geo['O']=8;
  geo['D']=12;
  geo['I']=20;

  for (int i = 0; i < n; ++i)
  {
     cin>>s;
     r+=geo[s[0]];

  
    

  }

cout<<r<<endl;

}


