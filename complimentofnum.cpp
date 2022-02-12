#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the value of n ";
    int m,n;
    cin>>n;
    m=n;
    int mask=0;
    if(n==0){
        return 1;
    }
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n) & mask;
    cout<<ans;
}