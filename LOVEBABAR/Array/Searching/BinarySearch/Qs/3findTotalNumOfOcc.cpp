#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else if (arr[mid] > key){
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
    }
    return ans;
}
int main(){
    int ev[9] = {1,2,2,2,2,2,2,2,5};
    cout << "The total no of 5 is -->" << (lastOcc(ev, 9, 5) - firstOcc(ev, 9, 5)) + 1;

}