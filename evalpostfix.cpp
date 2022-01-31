#include<iostream>
#include <stdlib.h>
using namespace std;
#define maxsize 10
enum Boolean{
    FALSE,
    TRUE
};
class Stack{
    int top;
    int a[maxsize];
    public:
    Stack(){
        top=-1;
    }
    Boolean Isfull();
    Boolean Isempty();
    void push(int);
    int pop();
    int peek();
    void display();
    
};
Boolean Stack :: Isfull(){
    if (top==maxsize-1){
        return TRUE;
    }
    else{
        return FALSE;
    }
} 
Boolean Stack :: Isempty(){
    if (top==-1){return TRUE;}
    return FALSE;

}
void Stack :: push(int ele){
    if(Isfull()){
        cout<<"Stack Overflow";
    }
    else{
        a[++top]=ele;
    }
}
int Stack :: pop(){
    if(Isempty()){
        cout<<"Stack Underflow";
        return -1;
    }
    else{
        return a[top--];
    }
}
int Stack :: peek(){
    if(top>=0){
        return a[top];
    }
    else{
        cout<<"Underflow"<<endl;
        return -1;
    }
}
void Stack :: display(){
    for(int i=top;i>=0;i--){
        cout<<a[i]<<endl;
    }
} 
int Operator(char c,int a ,int b){
    switch(c){
        case '*': return(a*b);break;
        case '+': return(a+b);break;
        case '-': return(a-b);break;
        case '/': return(a/b);break;
        case '$': return(a^b);break;
        case '^': return(a^b);break;
        default:
        return 0;
    }
}
int postEval(string post){
    Stack s;
    int l=post.length();
    for (int i=0;i<l;i++){
        if(isdigit(post[i])){
            s.push(post[i]-'0');
        }
        else{
            s.push(Operator(post[i],s.pop(),s.pop()));
        }
    }
    return s.peek();
}
int main(){
    string s;
    cout<<"Enter the expression: ";
    cin>>s;
    cout<<postEval(s);
}