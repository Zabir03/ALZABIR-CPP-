#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,4,6,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the Target Sum value :";
    int TargetSum;
    cin>>TargetSum;
    int Pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==TargetSum){
                Pairs++;

            }
        }
    }
    cout<<Pairs<<endl;
    return 0;
}