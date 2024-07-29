#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> temp(n);
    
    for(int i = 0; i < n; i++) {
        cin >> temp[i];
    }
    
    for(int j = 0; j < n; j++) {
        bool visited = false;
        int c = 0;
        for(int k = j + 1; k < n; k++) {
            c++;
            if(temp[k] > temp[j]) {
                visited = true;
                break;
            }
        }
        if(visited) {
            cout << c << "";
        } else {
            cout << "0" << "";
        }
        
        if(j<n-1){
            cout << ",";
        }
    }
    return 0;
}
