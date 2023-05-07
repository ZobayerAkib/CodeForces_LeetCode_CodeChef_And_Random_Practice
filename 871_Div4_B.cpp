#include<bits/stdc++.h>
using namespace std;

int longestBlankSpace(vector<int>& arr) {
    int longestSpace = 0;
    int currentSpace = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            currentSpace++;
        } else {
            longestSpace = max(longestSpace, currentSpace);
            currentSpace = 0;
        }
    }

    longestSpace = max(longestSpace, currentSpace);

    return longestSpace;
}

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n; // length of the array

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // input array elements
        }

        int longestSpace = longestBlankSpace(arr);
        cout << longestSpace << endl;
    }

    return 0;
}