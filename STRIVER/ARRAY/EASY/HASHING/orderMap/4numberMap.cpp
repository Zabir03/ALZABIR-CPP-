#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    //pre-compute
    map<int, int> mapp;
    for(int i = 0; i < n; i++){
        mapp[arr[i]]++;
    }



    //fetching
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << "count number -->" << mapp[number];
    }
    return 0;
}