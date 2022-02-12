#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+ (end-start)/2;
    while(start<=end){
        
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+ (end-start)/2;

    }
    return -1;
}


int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={6,7,8,9,10};
    cout<<binarysearch(even,6,3)<<endl;
    cout<<binarysearch(odd,5,9)<<endl;

}