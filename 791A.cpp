#include<bits/stdc++.h>
using namespace std;


int solve(int a,int b)
{



	int answer = 0;
	while(a <= b) {
		a *= 3;
		b *= 2;
		++answer;
	}
	cout<<answer;
}


int main()
{
     int a , b;
   cin>>a>>b;
   solve(a,b);
}

