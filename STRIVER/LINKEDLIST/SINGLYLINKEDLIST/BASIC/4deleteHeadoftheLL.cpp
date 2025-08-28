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
            next = nullptr;
        }
};
node* converarr2ll(vector<int> &arr){
    if(arr.size() == 0) return nullptr;

    node* head = new node(arr[0]);
    node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

node* deleteHead(node* head){
    node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

void printLL(node* head){
    node* mover = head;
    while(mover != nullptr){
        cout << mover->data << "->";
        mover = mover->next;
    }
    cout << "nullptr"<< endl;
    
}



int main(){
    vector<int> arr = {2, 3, 4, 5, 6};
    node* head = converarr2ll(arr);
    head = deleteHead(head);
    printLL(head);

    return 0;

}