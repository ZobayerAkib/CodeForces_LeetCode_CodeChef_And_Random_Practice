#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    string s1("hello");
    int c=0,j=0;
    cin>>s;


    for(int i=0;i<(s).length();i++)
    {
        if(s[i]==s1[j])
        {
            c++;
            j++;
        }

    }


    if(c==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }






    return 0;
}
