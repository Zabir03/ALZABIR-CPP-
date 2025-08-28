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


// Function Delete Kth Node from LL
node* deleteKth(node* head, int k){
    if(head == nullptr) return head;

    //Case 1 If k == 1
    if(k == 1){
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Case: If K == 3 or 5 or etc
    int cnt = 0; 
    node* temp = head;
    node* prev = nullptr;

    while(temp != nullptr){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
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
    
    int k;
    cout << "Enter the element can delete: ";
    cin >> k;

    

    node* head = converArr2LL(arr);
    head = deleteKth(head, k);
    printLL(head);

    return 0;
}