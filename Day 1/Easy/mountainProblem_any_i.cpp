#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    
    for (int i = 0; i < n; i++)
        cin >> A[i];
        
    for (int i = 0; i < n; i++) {
        bool left_visited = true;
        bool right_visited = false;
        
        for (int j = i - 1; j >= 0; j--) {
            if (A[j] < A[i]) {
                break;
            }
            if (j == 0) {
                left_visited = true;
            }
        }
        
        for (int k = i + 1; k < n; k++) {
            if (A[k] > A[i]) {
                break;
            }
            if (k == n - 1) {
                right_visited = true;
            }
        }
        
        if (left_visited && right_visited) {
            cout << i << " ";
            break;
        }
    }
    
    return 0;
}
