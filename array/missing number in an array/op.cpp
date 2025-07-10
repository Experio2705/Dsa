#include<iostream>
using namespace std;

int main(){
    int n=5;
    int a[n]={1,2,4,5};
    int summ=(n*(n+1))/2;
    int sum;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int b=summ-sum;
    cout<<b;
    return 0;
}