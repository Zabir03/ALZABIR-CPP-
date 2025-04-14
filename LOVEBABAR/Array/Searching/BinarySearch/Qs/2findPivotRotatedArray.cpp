#include <iostream>
using namespace std;
int findPivort(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s < e){
        int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return s;
}
int main(){
    int  piv[8] = {3,4,5,6,7,8,1,2};
    cout << "The pivort element is ---> " << findPivort(piv, 8);
    return 0;


}