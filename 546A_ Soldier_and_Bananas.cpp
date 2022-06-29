#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k , n , w , borrowMoney=0 ;
    cin>>k>>n>>w ;

    borrowMoney=(k*((w*(w+1))/2))-n;
 if(borrowMoney>0)
 {

    cout<<borrowMoney<<endl;
 }
 else
    cout<<0<<endl;


}
