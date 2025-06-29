#include<bits/stdc++.h>
using namespace std;

int findPage(vector<int> &arr2, int pages){
    int stu = 1;
    int cntPage = 0;
    for(int i = 0; i < arr2.size(); i++){
        if(cntPage + arr2[i] <= pages){
            cntPage += arr2[i];
        }
        else{
            stu++;
            cntPage = arr2[i];
        }
    }
    return stu;
}

int findBook(vector<int> &arr, int n, int m){
    int l = *max_element(arr.begin(), arr.end());
    int h = 0;
    for(int i = 0; i < n; i++){
        h += arr[i];
    }
    while(l <= h){
        int mid = l + (h - l);
        int cntstu = findPage(arr, mid);
        if(cntstu > m){
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
    cout << "Enter the size of array (n) -->";
    cin >> n;
    cout << "Enter the no of student(m)-->";
    cin >> m;

    vector<int> arr(n);
    cout << "Enter the value of arr element-->";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << findBook(arr, n, m);
}