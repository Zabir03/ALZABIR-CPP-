#include<bits/stdc++.h>
using namespace std;
int findMajority(int arr[], int n){
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]) cnt++;
        }
        if(cnt > n/2) return arr[i];
    }
}
int optimalApproachMoorsAlgo(int arr[], int n){
    int cnt = 0;
    int ele;
    // Applying Moor's Algorithm
    for(int i = 0; i < n; i++){
        if(cnt == 0){
            cnt = 1;
            ele = arr[i];
        }
        else if(ele == arr[i]) cnt++;
        else cnt--;
    }
    // Now checking the majority element
    int ncnt = 0;
    for(int i = 0; i < n; i++){
        if(ele == arr[i]) ncnt++;
    }
    if(ncnt > n / 2) return ele;
    return -1;

}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << findMajority(arr, n);
    cout << endl;
    cout << "Optimal approach! -->";
    cout << optimalApproachMoorsAlgo(arr, n);
    
}