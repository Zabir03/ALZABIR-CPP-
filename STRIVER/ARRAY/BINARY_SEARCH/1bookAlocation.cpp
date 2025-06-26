#include<bits/stdc++.h>
using namespace std;

int findStu(vector<int> &arr, int pages){
    int stu = 1;
    int cntpage = 0;
    for(int i = 0; i < arr.size(); i++){
        if(cntpage + arr[i] <= pages){
            cntpage += arr[i];
        }
        else{
            stu++;
            cntpage = arr[i];
        }
    }
    return stu;
}

int findPage(vector<int> &arr, int n, int m){
    int l = *max_element(arr.begin(), arr.end());
    int h = accumulate(arr.begin(), arr.end(), 0);

    while(l <= h){
        int mid = l + (h - l)/2;
        int cntstu = findStu(arr, mid);
        if(cntstu > m) l = mid + 1;
        else{
            h = mid - 1;
        }
    }
    return l;
}
int main(){
    int n , m;
    cout << "Enter the value of n and m-->";
    cin >> n >> m;
    vector<int> arr(n);
    cout << "Enter the value of array-->";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << findPage(arr, n, m);
    return 0;
}
