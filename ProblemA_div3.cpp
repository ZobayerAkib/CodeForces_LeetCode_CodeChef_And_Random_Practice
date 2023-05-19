#include <iostream>
#include <string>
#include <set>

using namespace std;

void solve()
{
    int n;
        cin >> n;

        string s;
        cin >> s;

        set<pair<char, char>> transitions;

        for (int i = 0; i < n - 1; i++) {
            transitions.insert({s[i], s[i + 1]});
        }

        int count = transitions.size();

        cout << count << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
        
}
