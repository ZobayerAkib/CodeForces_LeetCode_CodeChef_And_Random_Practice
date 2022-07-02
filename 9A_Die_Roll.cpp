#include <bits/stdc++.h>

using namespace std;

void solve(int Y ,int W)
{
    if(Y>W)
    {

        if(Y==1)
        {
            cout<<"1/1"<<endl;
        }
        else if(Y==5)
        {
            cout<<"1/3"<<endl;
        }
        else if(Y==4)
        {
            cout<<"1/2"<<endl;
        }
        else if(Y==3)
        {
            cout<<"2/3"<<endl;
        }
        else if(Y==2)
        {
            cout<<"5/6"<<endl;
        }
        else if(Y==6)
        {
            cout<<"1/6"<<endl;
        }
        else{
            cout<<"0/1"<<endl;
        }

    }

    else

        if(W==1)
        {
            cout<<"1/1"<<endl;
        }
        else if(W==5)
        {
            cout<<"1/3"<<endl;
        }
        else if(W==4)
        {
            cout<<"1/2"<<endl;
        }
        else if(W==3)
        {
            cout<<"2/3"<<endl;
        }
        else if(W==2)
        {
            cout<<"5/6"<<endl;
        }
        else if(W==6)
        {
            cout<<"1/6"<<endl;
        }
        else{
            cout<<"0/1"<<endl;
        }
}
int main()
{
   int W,Y;
    cin>>Y>>W;
    solve(Y,W);
}
