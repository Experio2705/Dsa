#include<iostream>
using namespace std;

int main(){
    int n=11;
    int arr[n]={1,1,2,2,2,3,3,4,4,5,5};
    int i=0;
    int j=1;
    while(j!=n){
        if(arr[i]==arr[j])
            j++;
        else{
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(int k=0;k<=i;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}