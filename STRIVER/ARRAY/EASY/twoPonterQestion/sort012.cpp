#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int> & arr, int n){
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "After Sorting -->";
    sort012(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
  
}