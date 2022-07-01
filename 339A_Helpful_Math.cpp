#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
   char ar[500];
    int i;
    int j=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            ar[j]=s[i];
            j++;
        }
    }
    sort(ar,ar+j);

     for (int i=0;i<j; ++i){
     if(i==j-1)
        cout << ar[i] << endl;
        else
            cout<<ar[i]<<"+" ;
}


}
