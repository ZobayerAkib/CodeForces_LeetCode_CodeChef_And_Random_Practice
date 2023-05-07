#include<bits/stdc++.h>
using namespace std;


const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

int dfs(vector<vector<int>>& grid, int i, int j) {
    int n = grid.size();
    int m = grid[0].size();

    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0) {
        return 0;
    }

    int volume = grid[i][j];
    grid[i][j] = 0; // mark the cell as visited

    for (int k = 0; k < 4; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        volume += dfs(grid, ni, nj);
    }

    return volume;
}

int largestLakeVolume(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int largestVolume = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] > 0) {
                int volume = dfs(grid, i, j);
                largestVolume = max(largestVolume, volume);
            }
        }
    }

    return largestVolume;
}

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // dimensions of the grid

        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        int largestVolume = largestLakeVolume(grid);
        cout << largestVolume << endl;
    }

    return 0;
}
