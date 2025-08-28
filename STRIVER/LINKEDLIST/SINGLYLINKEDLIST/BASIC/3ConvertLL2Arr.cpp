#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
    public:
        node(int x, node* y){
            data = x;
            next = y;
        }
    public:
        node(int x){
            data = x;
            next =  nullptr;
        }
};

// create a linkedlist
void convertLL2Arr(node* head){
    node* mover = head;
    vector<int> arr;
    while(mover != nullptr){
        arr.push_back(mover->data);
        mover = mover->next;
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main(){
    node* head = new node(2);
    head->next = new node(3);
    head->next->next = new node(4);

    convertLL2Arr(head);



}