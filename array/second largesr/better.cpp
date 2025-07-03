#include<iostream>
using namespace std;

int main(){
    int arr[5]={3,2,1,5,7};
    int largest =arr[0];
    int sclargest=-1;
    for(int i=1;i<5;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    for(int i=1;i<5;i++){
        if(sclargest<arr[i] && arr[i]!=largest){
            sclargest=arr[i];
        }
    }
    cout<<sclargest;
    return 0;
}