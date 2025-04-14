#include<iostream>
using namespace std;
int main(){
    int arr[]={1,34,33,21,11,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=11;
    int ans=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            ans=arr[i];
            break;
        }
    }
    cout<<ans<<endl;
    return 0;

}