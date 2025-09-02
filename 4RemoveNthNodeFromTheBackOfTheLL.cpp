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
    public:
        node(int data1){
            data = data1;
            next = nullptr;
        }
};
//Function: Convert Arr to LL
node* covertArr2LL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

//Function: Remove nth Node from the back of the LL
node* removeNthNodeFromTheBack(node* head, int n){
    node* fast = head;
    node* slow = head;
    for(int i = 0; i < n; i++){
        fast = fast->next;
    }
    if(fast == nullptr) return head->next;

    while(fast->next != nullptr){
        fast = fast->next;
        slow = slow->next;
    }

    node* delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;
    return head;
}

//Function: Print all the LL
void print(node* head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr";
}
int main(){
    int n;
    cout << "Enter the size of the arr: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the value of arr: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter The Kth node can be deleted from LL: ";
    cin >> k;
    node* head = covertArr2LL(arr);

    head = removeNthNodeFromTheBack(head, k);

    print(head);
}