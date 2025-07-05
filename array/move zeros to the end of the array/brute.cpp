#include<iostream>
using namespace std;
//arr[]= { 1 , 0 , 2 , 3 , 2 , 0 , 0 , 4 , 5 , 1 }
//arr[]= { 1 , 2 , 3 , 2 , 4 , 5 , 1 , 0 , 0 , 0 }

void swap(int arr[],int i,int n){
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }
}
int main(){
    int n=10;
    int arr[10]= { 1 , 0 , 2 , 3 , 2 , 0 , 0 , 4 , 5 , 1 };
    int cnt=0;
    int i=0;
    while(i!=n-1){
        if(arr[i]==0) {
            cnt++;
            swap(arr,i,n);
            i--;
        }
        i++;
    }
    for(int i=n-cnt;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}