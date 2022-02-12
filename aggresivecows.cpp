#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int k , int mid){
    int cowcount=1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false; 
}

int aggresivecows(int arr[],int n,int k){
    
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int arr[4]={10,20,30,40};
    cout<<aggresivecows(arr,4,2);
}