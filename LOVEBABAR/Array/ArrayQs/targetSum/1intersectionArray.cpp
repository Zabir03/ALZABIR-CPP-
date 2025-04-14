#include<iostream>
using namespace std;
int arrayInterSection(int arr1[], int n, int arr2[], int m){
    int i=0, j=0;
    int arr3[n];
    while( i < n && j < m){
        if(arr1[i] == arr2[j]){
            return arr1[i];
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
        return arr1[i];
    }




}
int printArray(int arr1, int n, int arr2, int m ){

}
int main(){
    int n;
    cout << "Enter the size of first array-->";
    cin >> n;

    int m;
    cout << "Enter the size of second array-->";

    cout << endl;

    int arr1[n];
    cout << "Enter the element of first array -->";
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cout << endl;

    int arr2[m];
    cout << "Enter the element of second array -->";
    for(int j = 0; j < m; j++){
        cin >> arr2[j];

    }
    int answer = arrayInterSection(arr1, n, arr2, m);
    cout << answer;




}
