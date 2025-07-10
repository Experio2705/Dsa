#include<iostream>
using namespace std;

int main(){
    int n=7;
    int a[n]={1,1,2,2,3,4,4};
    int res=0;
    for(int i=0;i<n;i++){
        res=res^a[i];
    }
    cout<<res;
    return 0;
}