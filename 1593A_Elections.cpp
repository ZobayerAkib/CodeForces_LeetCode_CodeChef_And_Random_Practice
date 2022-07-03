#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
    cin >> t;
    while (t--) {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int ma = max(a, max(b, c));
        if (a > b && a > c)
            cout << 0 << " ";
        else
            cout << ma + 1 - a << " ";
        if (b > a && b > c)
            cout << 0 << " ";
        else
            cout << ma + 1 - b << " ";
        if (c > b && c > a)
            cout << 0 << endl;
        else
            cout << ma + 1 - c << endl;

    }
    return 0;
}








