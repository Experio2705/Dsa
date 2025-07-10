#include<iostream>
using namespace std;

int main(){
    int n=10;
    int a[n]={1,2,3,1,1,1,1,4,2,3};
    int k=5;
    int len=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum>k) break;
            if(sum==k){
                cout<<sum;
                len=max(len,j-i+1);
            }
        }
    }
    cout<<len;

    return 0;
}