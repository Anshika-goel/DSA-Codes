#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
    int StudentCount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum + arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            StudentCount++;
            if(StudentCount>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int allocatebooks(int arr[],int n,int m){
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}
int main(){
    int arr[4]={10,20,30,40};
    cout<<allocatebooks(arr,4,2);
}