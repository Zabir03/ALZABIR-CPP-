#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
   
    //precompute:
    int hash[26] = {0};
    for (int i = 0; i < n; i++) {
        for(char c : s[i]){
            hash[c - 'a']++;
        }
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}