#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node* back;
    public:
        node(int data1, node* next1, node* back1){
            data = data1;
            next = next1;
            back = back1;
        }
    public:
        node(int data1){
            data = data1;
            next = nullptr;
            back = nullptr;
        }

};

// =====Function: Convert Array  to DLL=====

node* convertArrToDll(vector<int> &arr){
    int n = arr.size();
    if(n == 0) return nullptr;
    node* head = new node(arr[0]);
    node* prev = head;
    for(int i = 1; i < n; i++){
        node* temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// =====Function: Delete the Head of the DLL=====
node* deleteHeadOfDll(node*head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    node* prev = head;
    head = prev->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;

    return head;
}

// =====Function: Delete the Tail of the DLL=====

node* deleteTailOfDll(node* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }

    node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }

    node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
   

    delete tail;

    return head;
}

// =====Function: Delete the Kth Node of the DLL=====
node* deleteKthNodeOfDll(node* head, int k){
    if(head == nullptr){
        return nullptr;
    }

    node* temp = head;
    int cnt = 0;
    while(temp != nullptr){
        cnt++;
        if(cnt == k) break;
        else{
            temp = temp->next;
        }
    }

    node* prev = temp->back;
    node* front = temp->next;

    if(prev == nullptr && front == nullptr){
        return nullptr;
    }

    if(prev == nullptr){
        return deleteHeadOfDll(head);
    }
    else if(front == nullptr){
        return deleteTailOfDll(head);
    }

    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;

    delete temp;

    return head;


}
// =====Function: Delete the Given Node of the DLL=====

void deleteGivenNode(node* temp){
    node* prev = temp->back;
    node* front = temp->next;

    if(front == nullptr){
        prev->next = nullptr;
        temp->back = nullptr;

        delete temp;

        return;
    }

    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;

    delete temp;
}

// =====Finction: Print all the Element of DLL=====
void printDll(node* head){
    while(head != nullptr){
        cout << "<-" << head->data << "->";
        head = head->next;
    }
    cout << "nullptr" << endl;
}
int main(){
    int n;
    cout << "Enter size of arr: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the value of Arr: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // int k;
    // cout << "Enter the Kth node you can delete: ";
    // cin >> k;

    node* head = convertArrToDll(arr);

    // head = deleteHeadOfDll(head);

    // head = deleteTailOfDll(head);

    // head = deleteKthNodeOfDll(head, k);

    deleteGivenNode(head->next->next);

    printDll(head);

    return 0;
}