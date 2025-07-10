#include<iostream>
using namespace std;

//A[]={1,2,3,3,4,5,6}
//B[]={2,3,3,5,6,6,7}
int main(){
    int n=7;
    int A[n]={1,2,3,3,4,5,6};
    int B[n]={2,3,3,5,6,6,7};
    int temp1[2*n]={0};
    int i=0;
    int j=0;
    int k=0;
    int temp=-1;
    while(i<n){
        if(A[i]==B[j] && temp!=A[i] && temp!=B[j]){
            temp=A[i];
            temp1[k]=A[i];
            // cout<<temp;
            k++;
            i++;j++;
        }
        else if(A[i]!=B[j] && temp==A[i]) i++;
        else if(A[i]!=B[j] && temp==B[j]) j++;
        else i++;
    }
    for(int i=0;i<n;i++){
        cout<<temp1[i]<<" ";

    }
    return 0;
}