#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplet(vector<int> &arr, int target){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(i != 0 && arr[i] == arr[i - 1]) continue;
        int j = i + 1;
        int k = n - 1;

        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum < target){
                j++;
            }
            else if(sum > target){
                k--;
            }
            else{
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && arr[j] == arr[j - 1]) j++;
                while(j < k && arr[k] == arr[k + 1]) k--;

            }
        }
    }
    return ans;

}

int main()
{
    vector<int> arr = { -1, 0, 1, 2, -1, -4};

    int n = arr.size();

    int target;
    cout << "Enter the target value-->";
    cin >> target;

    vector<vector<int>> ans = findTriplet(arr, target);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;

}