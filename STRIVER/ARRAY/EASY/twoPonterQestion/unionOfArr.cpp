#include<bits/stdc++.h>
using namespace std;
int unionArray(vector<int> &arr1, vector<int> &arr2, int n1, int n2){
    set<int> st;
    for(int i = 0; i < n1; i++){
        st.insert(arr1[i]);
    }
    for(int i = 0; i < n2; i++) {
        st.insert(arr2[i]);
    }
    vector<int> temp;
    int i = 0;
    for(auto it : st){
        temp.push_back(it);
    }
    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << " ";
    }
}
int main(){
    int n1 , n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1);
    cout << "Enter the value of arr1 -->" ;
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    vector<int> arr2(n2);
    cout << "Enter the value of arr2 -->";
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
    unionArray(arr1, arr2, n1, n2);
}