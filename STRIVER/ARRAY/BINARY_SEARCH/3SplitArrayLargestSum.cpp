// Same as book allocation problem

#include<bits/stdc++.h>
using namespace std;

int findArr(vector<int> &arr, int arrcnt){
    int splt = 1;
    int cntarr = 0;
    for(int i = 0; i < arr.size(); i++){
        if(cntarr + arr[i] <= arrcnt){
            cntarr += arr[i];
        }
        else{
            splt++;
            cntarr = arr[i];
        }
    }
    return splt;
}

int findSplit(vector<int> &arr, int n, int m){
    int l = *max_element(arr.begin(), arr.end());
    int h = 0;
    for(int i = 0; i < n; i++){
        h += arr[i];
    }

    if(n < m) return -1;

    while(l <= h){
        int mid = l + (h - l)/2;
        int cntArr = findArr(arr, mid);
        if(cntArr > m){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    return l;
}
int main(){
    int n, m;
    cout << "Enter valu of n -->";
    cin >> n;
    cout << "Enter value of m -->";
    cin >> m;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << findSplit(arr, n, m);

}