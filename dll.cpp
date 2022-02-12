#include<iostream>
using namespace std;
class node{
    public:
    node* prev;
    node* next;
    int data;
    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
void insertAttail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}
void insertAthead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head->prev=n;
    head=n;

}
void deletion(node* &head,int pos){
    //deleteAthead
    if(pos==1){
        node* todelete=head;
        head=head->next;
        head->prev=NULL;
        delete todelete;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;
    delete temp;
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    int y,x;
    cout<<"1.INSERT AT TAIL\n 2.INSERT AT HEAD\n 3.DELETION AT POS\n 4.DISPLAY\n 5.EXIT";
    cin>>y;
    switch (y)
    {
    case 1:{
        cout<<"Enter the element to be inserted";
        cin>>x;
        insertAttail(head,x);
    }
    break;
    case 2:
    {
        cout<<"Enter the element to be inserted";
        cin>>x;
        insertAthead(head,x);
    }
    break;
    case 3:{
    cout<<"Enter the position at which the element is to be deleted";
    cin>>x;
    deletion(head,x);
    }
    break;
    case 4:
    display(head);
    break;
    case 5:
    exit(0);
    }

}