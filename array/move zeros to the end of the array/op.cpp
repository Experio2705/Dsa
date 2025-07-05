#include<iostream>
using namespace std;

int main(){
    int n=10;
    int arr[10]= { 1 , 0 , 2 , 3 , 2 , 0 , 0 , 4 , 5 , 1 };
    int cnt=0;
    int i=1;
    int j=0;
    while(i!=n){
        if(arr[j]!=0){ 
            j++;
            i=j+1;
        }
        else if(arr[i]!=0 && arr[j]==0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
            j++;
        }
        else    
            i++;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}