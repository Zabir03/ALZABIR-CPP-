#include <bits/stdc++.h>
using namespace std;

void moveZero(vector<int> &arr) {
    vector<int> temp;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    int nz = temp.size();

    for (int i = 0; i < nz; i++) {
        arr[i] = temp[i];
    }
    for (int i = nz; i < n; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x); // ✅ Correct way to add to a vector
    }

    moveZero(arr);
}
