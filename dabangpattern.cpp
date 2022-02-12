#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        int star=2*(i-1);
        while(star){
            cout<<"*"<<" ";
            star--;
        }
        int k=n-i+1;
        while(k){
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
        i++;
    }
}