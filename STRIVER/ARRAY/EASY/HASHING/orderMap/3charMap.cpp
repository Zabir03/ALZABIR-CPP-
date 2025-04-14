#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    
    //pre-compute
    map<string, int> mpp;
    for(int i = 0; i < n; i++){

        mpp[s[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        //cout << "Cunt char is -->" << mpp[ch];
    }


}