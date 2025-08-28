#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
    public:
        node(int data1, node* next1){
            data = data1;
            next = next1;
        }
        
};
int main(){
    vector<int> arr = {2, 3, 4, 5, 6};

    node* y1 = new node(arr[0], nullptr);
    node* y2 = new node(arr[1], nullptr);
    node* y3 = new node(arr[2], nullptr);
    node* y4 = new node(arr[3], nullptr);
    node* y5 = new node(arr[4], nullptr);

    cout << y1->data<<endl;
    cout << y2->data<<endl;
    cout << y3->data<<endl;
    cout << y4->data<<endl;
    cout << y5->data<<endl;

    return 0;


}