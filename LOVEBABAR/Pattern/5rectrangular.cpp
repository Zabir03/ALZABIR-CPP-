#include<iostream>
using namespace std;
int main(){
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<6;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}