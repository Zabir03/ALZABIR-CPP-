#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr, int n){

    for(int i = 0; i < n - 1; i++){
        int mini = i;
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
     for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
int min(){
    int n;
    cout << "Enter value of n-->";
    cin >> n;
    vector<int> arr;
    cout << "Enter the value of arr-->";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    selectionSort(arr, n);
   
}