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
//Function Convert Array to LINKEDLIST
node* converArr2LL(vector<int> &arr){
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

//Function: insert in the head of a LL

node* insertHead(node* head, int ele){
    node* temp = new node(ele, head);
    return temp;

}

//Function: insert in the tail of a LL

node* insertTail(node* head, int ele){
    if(head == nullptr){
        return new node(ele);
    }
    node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    node* newNode = new node(ele);
    temp->next = newNode;

    return head;
}

//Function: Insert Kth Position of the linked List

node* insertKthNode(node* head, int k, int x){
    if(head == nullptr){
        if(k == 1) {
            return new node(x);
        }
        else{
            return nullptr;
        }
    }

    if(k == 1){
        node* temp = new node(x, head);
        return temp;
    }

    int cnt = 0;
    node* temp = head;

    while(temp != nullptr){
        cnt++;
        if(cnt == k - 1){
            node* y = new node(x);
            y->next = temp->next;
            temp->next = y;
            break;
        }
        temp = temp->next;
    }
    return head;
}

//Function: Insertion element before the given value in al LinkedList

node* insertEleBefore(node* head, int ele, int val){
    if(head == nullptr){
        return nullptr;
    }

    if(head->data == val){
        node* temp = new node(ele, head);
        return temp;
    }

    node* temp = head;

    while(temp->next !=  nullptr){

        if(temp->next-> data == val){
            node* y = new node(ele);
            y->next = temp->next;
            temp->next = y;
            break;
        }
        temp = temp->next;
    }
    return head;
}

//Function Print the LL
void printLL(node* head){
    node* mover = head;

    while(mover != nullptr){
        cout << mover->data << "->";
        mover = mover->next;
    }
    cout << "nullptr"<< endl;
}

int main(){
    int n;
    cout << "Enter the size of arr: ";
    cin >> n;


    vector<int> arr(n);
    cout << "Enter the value of Arr element: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int X;
    cout << "Enter the element can insert:";
    cin >> X;
    
    int k;
    cout << "Enter the element can insert position: ";
    cin >> k;



    

    node* head = converArr2LL(arr);

    // head = insertHead(head, k);

    // head = insertTail(head, k);

    // head = insertKthNode(head, k, X);

    head = insertEleBefore(head, k, X);
    printLL(head);

    return 0;
}