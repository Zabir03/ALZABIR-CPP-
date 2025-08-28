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


// =====Function: Inset Node Before the Head of the DLL =====

node* insertBefHead(node* head, int val){
    node* newHead = new node(val, head, nullptr);
    if(head != nullptr) head->back = newHead; // only if DLL not empty
    return newHead;  // ✅ return new head
}

// =====Function: Inset Node Before the tail of the DLL =====
node* insertBeforeTail(node* head, int val){

    if(head->next == nullptr){
        return insertBefHead(head, val);
    }
    node* tail = head;
    node* prev = nullptr;

    while(tail->next != nullptr){
        tail = tail->next;
    }
    prev = tail->back;
    node* newnode = new node(val, tail, prev);
    prev->next = newnode;
    tail->back = newnode;

    return head;
}

// =====Function: Inset Node Before kth node  of the DLL =====
node* insertBeforeKthNode(node* head, int k, int val){
    if(k == 1){
        return insertBefHead(head, val);   
    }
    int cnt = 0;
    node* temp = head;
    node* prevNode = nullptr;
    while(temp != nullptr){
        cnt++;
        if(cnt == k){
            break;
        }
        else{
            temp = temp->next;
        }
    }
    prevNode = temp->back;
    node* newNode = new node(val, temp, prevNode);
    prevNode->next = newNode;
    temp->back = newNode;
    return head;
}

// =====Function: nsert before given node in DLL ====

void insertBeforeNode(node* currnode, int val){
    node* prevNode = currnode->back;
    node* newNode = new class node(val, currnode, prevNode);
    prevNode->next = newNode;
    currnode->back = newNode;
    return;
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
    // cout << "Enter the kth value can insert: ";
    // cin >> k;

    int val;
    cout << "Enter value can insert: ";
    cin >> val;

    node* head = convertArrToDll(arr);

    // head = insertBefHead(head, k);

    // head = insertBeforeTail(head, k);

    //head = insertBeforeKthNode(head, k, val);

    insertBeforeNode(head->next, val);

    printDll(head);

    return 0;

}