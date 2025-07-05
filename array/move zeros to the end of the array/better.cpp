#include<iostream>
using namespace std;

int main(){
    int n=10;
    int arr[n]= { 1 , 0 , 2 , 3 , 2 , 0 , 0 , 4 , 5 , 1 };
    int temp[n]={0};
    int i=0;
    int j=0;
    while(i!=n){
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
        i++;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}