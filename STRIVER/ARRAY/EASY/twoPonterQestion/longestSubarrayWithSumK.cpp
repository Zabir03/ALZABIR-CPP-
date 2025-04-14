#include <bits/stdc++.h>
using namespace std;
int findLength(vector<int> & arr, int n, int k){
    int left = 0, right = 0;
    int sum = arr[0];
    int maxlen = 0;
    while(right < n){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxlen = max(maxlen, right-left+1);
        }
        right++;
        if(right < n) sum += arr[right];

    }
    return maxlen;

}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << findLength(arr, n, k);
    

}
