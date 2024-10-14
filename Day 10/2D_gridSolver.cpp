#include <iostream>
#include <vector>
using namespace std;

long long int gridSolver(int r, int c){
    vector< vector<long long int> > grid(r+1, vector<long long int>(c+1, 0));
    grid[1][1] = 1;
    for(int i = 1;i <= r;i++){
        for(int j = 1;j <= c;j++){
            if (i == 1 && j == 1) continue;
            grid[i][j] = grid[i-1][j] + grid[i][j-1];
        }
    }
    return grid[r][c];
}

int main() {
    int r, c;
    cin >> r;
    cin >> c;
    cout << gridSolver(r, c);
}
