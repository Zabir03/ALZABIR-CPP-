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
// Function: Convert the Array to LL;

node* covertArr2LL(vector<int> & arr)
{
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i < arr.size(); i++)
    {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


//Function Sort 0's 1's and 2's
node* sortO12(node* head)
{
    node* temp = head;
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    while(temp != nullptr)
    {
        if(temp->data == 0) cnt0++;
        else if(temp->data == 1) cnt1++;
        else cnt2++;

        temp = temp->next;
    }

    temp = head;
    while(temp != nullptr)
    {
        if(cnt0 > 0){
            temp->data = 0;
            cnt0--;
        }
        else if(cnt1 > 0){
            temp->data = 1;
            cnt1--;
        }
        else{
            temp->data = 2;
            cnt2--;
        }

        temp = temp->next;
    }

    return head;
}


//Function: Print the LL
void print(node* head)
{
    node* temp = head;
    while(temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr";
}

int main(){
    int n;
    cout << "Enter the size of Arr: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the value of Array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    node* head = covertArr2LL(arr);

    head = sortO12(head);

    print(head);

}