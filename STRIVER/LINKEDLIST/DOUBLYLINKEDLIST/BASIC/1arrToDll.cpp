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

//Function: Convert Array to DLL
node* convertArr2Dll(vector<int> &arr){
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

//Function: Print all DLL node
void printDll(node* head){
   
    while(head != nullptr){
        cout << "<- " << head->data << " ->";
        head = head->next;
    }
    cout << "nullptr"<<endl;
}
int main(){
    int n;
    cout << "Enter size of arr: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the element of Arr: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    node* head = convertArr2Dll(arr);
    printDll(head);

    return 0;

}