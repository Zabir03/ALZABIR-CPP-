#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
    public:
        node(int x){
            data = x;
            next = nullptr;
        }
    public:
        node(int x, node* y){
            data = x;
            next = y;
        }
};
node* convertArr2LL(vector<int> &arr){
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

node* deleteTail(node* head){
    if(head == nullptr || head->next == nullptr) return nullptr;

    node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
void printLL(node* head){
    node* mover = head;
    while (mover != nullptr){
        cout << mover->data << "->";
        mover = mover->next;
    }
    cout << "nullptr"<<endl;
}
int main(){
    vector<int> arr = {21, 22, 3, 5, 6};
    node* head = convertArr2LL(arr);
    head = deleteTail(head);
    printLL(head);

    return 0;

}