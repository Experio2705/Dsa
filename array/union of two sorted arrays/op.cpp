#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n=6;
    int m=6;
    int arr1[n]={1,1,2,3,4,5};
    int arr2[m]={2,3,4,4,5,6};
    int c=n+m;
    int un[c];
    int i=0;
    int j=0;
    int k=0;
    int temp=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j] && temp!=arr1[i]){
            temp=arr1[i];
            un[k]=arr1[i];
            k++;
            i++;
        }
        else if(temp==arr1[i]) i++;
        else if(temp==arr2[j]) j++;
        else{
            temp=arr2[j];
            un[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        if(temp!=arr1[i]){
            un[k]=arr1[i];
            k++;
        }
        i++;
    }
    while(j<n){
        if(temp!=arr2[j]){
            un[k]=arr2[j];
            k++;
        }
        j++;
    }
    for(int i=0;i<k;i++){
        cout<<un[i]<<" ";
    }
    return 0;
}
