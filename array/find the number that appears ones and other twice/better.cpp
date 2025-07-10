#include<iostream>
using namespace std;

int main(){
    int n=7;
    int a[n]={1,1,2,2,3,3,4};
    int maxi=0;
    for(int i=0;i<n;i++){
        if(a[i]>maxi) maxi=a[i];
    }
    int temp[maxi+1]={0};
    for(int i=0;i<n;i++){
        temp[a[i]]+=1;
    }
    for(int i=0;i<n;i++){
        if(temp[i]==1){
            cout<<i;
        }
    }
    return 0;
}