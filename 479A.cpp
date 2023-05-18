#include<bits/stdc++.h>
using namespace std;



void solve(int a , int b , int c)
{
  int ans = a + b + c;
    ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);

	cout << ans << endl;
   

   
}
int main()
{
    int a , b,c;
    cin>>a>>b>>c;
    solve(a,b,c);
}