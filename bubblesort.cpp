#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=1;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        
        }
        //best case sorted array given time complexcity O(n)
        //worst case O(n^2)
        if(swapped==false){
            break;
        }
    }
}
int main(){
    int arr[5]={2,1,67,45,30};
    bubblesort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"  ";
    }
}