#include<iostream>
using namespace std;

int main(){
    int n=5;
    int a[n]={1,2,4,5};
    int temp[n]={0};
    for(int i=0;i<n;i++){
        temp[a[i]]=a[i];
    }
    for(int i=1;i<n;i++){
        if(temp[i]==0){
            cout<<i;
        }
    }
    return 0;
}