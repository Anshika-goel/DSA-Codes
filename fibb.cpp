#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<" ";
    cin>>n;
    int c,a=0,b=1;
    for(int i=1;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

}